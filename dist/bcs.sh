set -e

parse() {
	if ! [ -f "$1" ]; then return; fi
	while read -r line; do
		first="${line%"${line#?}"}"
		if [ "$first" = "/" ]; then
			links="$links $line"
		elif [ "$first" = "-" ]; then
			links="$links $line"
		else
			syslibs="$syslibs $line"
		fi
	done < "$1"
}

stem="${1%.*}"
parse "$stem.dep"
if [ -n "$syslibs" ]; then
	cflags=$(pkg-config --cflags "$syslibs")
	libs=$(pkg-config --libs "$syslibs")
fi
cc="cc -Og -g -Wfatal-errors
	-Wno-discarded-qualifiers
	-Wno-incompatible-pointer-types
	--std=c2x -D_POSIX_C_SOURCE=200809L $CFLAGS"
$cc -c -o $stem.o $cflags $stem.c
name="${stem##*/}"
if [ "${1%.elf}" = "$1" ]; then
	exit 0
fi
# limitation of pkg-config, all "-link" are processed after pkgconfig
$cc -o $stem.elf $stem.o $obj $libs $links
