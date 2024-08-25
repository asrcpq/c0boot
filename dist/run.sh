set -e
d="$(readlink -f "$0")"
d="${d%/*}"
mkdir -p build
for file in *.ltr; do
	stem="${file%.ltr}"
	if ( grep -q '\.\[' "$file" ); then
		"$d/build/c0p" "$file" "build/$stem.c1"
		"$d/build/c1c0" "build/$stem.c1" > "build/$stem.c0"
	else
		"$d/build/c0p" "$file" "build/$stem.c0"
	fi
	"$d/build/c0c2" "build/$stem.c0"
	sh "$d/bcs.sh" "build/$stem.c"
done
