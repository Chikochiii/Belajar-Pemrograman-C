CC=gcc
CFLAGS=-I./src

all: main

main: main.c src/kalkulator.c
	$(CC) main.c src/kalkulator.c -o kalkulator $(CFLAGS)

clean:
	rm -f kalkulator
