
CC=gcc
CFLAGS=-g -Wall
OBJS=filter.o elemtype.o list.o main.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm a.out *.o main



