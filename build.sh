
CC="cc --std=c2x -D_POSIX_C_SOURCE=200809L -Wno-incompatible-pointer-types"
for file in *.c; do
	$CC -c -o ${file%.c}.o $file
done
for proj in ccc rmake; do
	$CC -o dist/build/$proj bin/$proj.c *.o
done

