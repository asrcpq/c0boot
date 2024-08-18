set -e

addlink() {
	for item in $links; do
		if [ "$item" = "$1" ]; then return; fi
	done
	links="$links $1"
}

addsyslib() {
	for item in $syslibs; do
		if [ "$item" = "$1" ]; then return; fi
	done
	syslibs="$syslibs $1"
	run=true
}

addgid() {
	for item in $obj; do
		if [ "$item" = "$1/build/lib.o" ]; then return; fi
	done
	obj="$obj $1/build/lib.o"
	recparse "$1/build/lib.dep"
}

recparse() {
	if ! [ -f "$1" ]; then return; fi
	for item in $visited; do
		if [ "$item" = "$1" ]; then return; fi
	done
	visited="$visited $1"
	while read -r line; do
		first="${line%"${line#?}"}"
		if [ "$first" = "/" ]; then
			addgid "$line"
		elif [ "$first" = "-" ]; then
			addlink "$line"
		else
			addsyslib "$line"
		fi
	done < "$1"
}

stem="${1%.*}"
recparse "$stem.dep"

if [ -n "$run" ]; then
	cflags=$(pkg-config --cflags "$syslibs")
	libs=$(pkg-config --libs "$syslibs")
fi
cc="clang -Og -Wmost -Wfatal-errors -Wconversion -Wno-parentheses\
	-Wno-incompatible-function-pointer-types\
	-Wno-incompatible-pointer-types-discards-qualifiers\
	--std=c2x -D_POSIX_C_SOURCE=200809L $CFLAGS"

>&2 echo "* TARGET:$stem.o SYSLIB:$cflags"
$cc -c -o $stem.o $cflags $stem.c

name="${stem##*/}"
if [ "$name" != main ] && [ "$name" != test ]; then
	exit 0
fi

>&2 echo "* TARGET:$stem.elf GID:$obj SYSLIB:$libs"
# all manual linking "-link" are processed after pkgconfig
# this is a limitation of pkg-config
# however the real solution is not to use pkg-config so we just put it here
$cc -o $stem.elf $stem.o $obj $libs $links
