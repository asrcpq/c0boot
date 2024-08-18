set -e
d="$(readlink -f "$0")"
d="${d%/*}"
build="/usr/local/bin"
pkg="/usr/local/lib/pkgconfig"
rm -rf "$build.old"
cp -r $build $build.old
mkdir -p "$build" "$pkg"

proc() {
	if [ -f "$1/run.sh" ]; then
		echo '#!/bin/sh' > "$build/$name"
		echo "exec sh \"$1/run.sh\"" '"$@"' >> "$build/$name"
		return 0
	fi
	# bootstrap installed has lower priority
	if [ -f "$1/build/run.sh" ]; then
		echo '#!/bin/sh' > "$build/$name"
		echo "exec sh \"$1/build/run.sh\"" '"$@"' >> "$build/$name"
		return 0
	fi
	if [ -f "$1/build/main.elf" ]; then
		cp "$1/build/main.elf" "$build/$name"
		return 0
	fi
}

pkg() {
	if [ -f "$1/build/$name.pc" ]; then
		dst="$(head -1 "$1/build/$name.pc" | cut -d' ' -f2)"
		cp "$1/build/$name.pc" "$pkg/$dst.pc"
	fi
}

for dir in "$d/.."/*; do
	dir="$(realpath "$dir")"
	name=${dir##*/}
	proc "$dir"
	pkg "$dir"
done
chmod -R +x "$build"
