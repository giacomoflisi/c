
CC=gcc
CFLAGS=-g -Wall
OBJS=radicenumerica.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o radicenumerica


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o radicenumerica



