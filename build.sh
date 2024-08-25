
CC="gcc --std=c2x -D_POSIX_C_SOURCE=200809L -Wno-incompatible-pointer-types"
for file in *.c; do
	$CC -c -o ${file%.c}.o $file
done
for proj in c0p c1c0 c0c2 rmake; do
	$CC -o dist/build/$proj bin/$proj.c *.o
done

