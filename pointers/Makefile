CC = gcc
CFLAGS = -g -Wall -Werror -fsanitize=address,undefined

PointerTest: PointerTest.c
	$(CC) $(GCC) PointerTest.c -o PointerTest

test:
	./PointerTest

clean:
	rm PointerTest