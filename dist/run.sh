set -e
d="$(readlink -f "$0")"
d="${d%/*}"
mkdir -p build
for file in *.ltr; do
	echo $file
	stem="$("$d/build/ccc" "$file")"
	sh "$d/bcs.sh" "$stem"
done
