
CC=gcc
CFLAGS=-g -Wall
OBJS=heapsort.o heapify.o pop.o elemtype.o maxheap.o main.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



