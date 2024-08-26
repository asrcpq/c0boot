set -e

parse() {
	if ! [ -f "$1" ]; then return; fi
	for item in $visited; do
		if [ "$item" = "$1" ]; then return; fi
	done
	visited="$visited $1"
	while read -r line; do
		first="${line%"${line#?}"}"
		if [ "$first" = "/" ]; then
			links="$links $line"
		elif [ "$first" = "-" ]; then
			links="$links $line"
		else
			syslibs="$syslibs $line"
			run=true
		fi
	done < "$1"
}

stem="$1"
parse "$stem.dep"

if [ -n "$run" ]; then
	cflags=$(pkg-config --cflags "$syslibs")
	libs=$(pkg-config --libs "$syslibs")
fi
cc="cc -Og -g -Wfatal-errors
	-Wno-discarded-qualifiers
	-Wno-incompatible-pointer-types
	--std=c2x -D_POSIX_C_SOURCE=200809L $CFLAGS"

# >&2 echo "* BCS:$stem.o"
$cc -c -o $stem.o $cflags $stem.c

name="${stem##*/}"
if [ "$name" != main ] && [ "$name" != test ]; then
	exit 0
fi

# all manual linking "-link" are processed after pkgconfig
# this is a limitation of pkg-config
# however the real solution is not to use pkg-config so we just put it here
# >&2 echo "* BCS:$stem.elf"
$cc -o $stem.elf $stem.o $obj $libs $links
