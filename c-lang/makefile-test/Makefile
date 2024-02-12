CC = gcc
CFLAGS = -g -std=c99 -Wvla -Wall -fsanitize=address,undefined

arrtest: arrtest.o arraylist.o
	$(CC) $(CFLAGS) arrtest.o arraylist.o -o arrtest

arraylist.o: arraylist.c arraylist.h
	$(CC) $(CFLAGS) -c arraylist.c

arrtest.o: arrtest.c arraylist.h
	$(CC) $(CFLAGS) -c arrtest.c

test: arrtest
	./arrtest

clean:
	rm *.o arrtest
