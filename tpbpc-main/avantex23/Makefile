CC = -gcc
CFLAGS = -Wall -Werror -ansi -pedantic


all: numbers-test

numbers-test: numbers-test.o put_numbers.o
	$(CC) $^ -o $@

numbers-test.o: numbers-test.c
	$(CC) -c $^

put_numbers.o: put_numbers.c
	$(CC) -c $^

clean:
	rm -f numbers-test.o put_numbers.o
	rm -f numbers-test