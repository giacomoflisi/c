
CC=gcc
CFLAGS=-g -Wall
OBJS=elemtype.o minheap.o main.o isheap.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



