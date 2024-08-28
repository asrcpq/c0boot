set -e
d="$(readlink -f "$0")"
d="${d%/*}"
mkdir -p build
run() {
	out="$("$d/build/ccc" "$1")"
	sh "$d/bcs.sh" "$out"
}
if [ -z "$1" ]; then
	for file in *.ltr; do run "$file"; done
	exit
fi
for file in "$@"; do run "$file"; done
