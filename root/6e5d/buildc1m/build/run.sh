set -e
[ -d build ] || mkdir build
d="$(readlink -f "$0")"
d="${d%/*}"
for file in c0.ltr main test; do
	if ! [ -f $file ]; then continue; fi
	if [ "$file" = "c0.ltr" ]; then
		out="build/lib.ltr"
	else
		out="build/$file.ltr"
	fi
	c1m "$file" "build/$file.c1"
	python3 "$d/pyc2c.py" "build/$file.c1" "$out"
	c0c "$out"
	bcs "$out"
done
