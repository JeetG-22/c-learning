CC = gcc
CFLAGS = -g -std=c99 -Wvla -Wall -fsanitize=address,undefined

test: arrtest
	./arrtest

arrtest: arrtest.o arraylist.o
	$(CC) $(CFLAGS) arrtest.o arraylist.o -o arrtest

arraylist.o: arraylist.c arraylist.h
	$(CC) $(CFLAGS) -c arraylist.c

arrtest.o: arrtest.c arraylist.h
	$(CC) $(CFLAGS) -c arrtest.c

clean:
	rm *.o arrtest
