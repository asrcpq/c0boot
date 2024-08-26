set -e
d="$(readlink -f "$0")"
d="${d%/*}"
mkdir -p build
for file in *.ltr; do
	echo $file
	out="$("$d/build/ccc" "$file")"
	sh "$d/bcs.sh" "$out"
done
