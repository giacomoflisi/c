
CC=gcc
CFLAGS=-g -Wall
OBJS=elemtype.o tree.o main.o insert.o dominant.o treemax.o delete.o mirror.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



