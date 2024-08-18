
CC="gcc --std=c2x -D_POSIX_C_SOURCE=200809L"
for file in *.c; do
	$CC -c -o ${file%.c}.o $file
done
for proj in c1m c0c rmake; do
	mkdir -p root/6e5d/$proj/build
	$CC -o root/6e5d/$proj/build/main.elf bin/$proj.c *.o
done

