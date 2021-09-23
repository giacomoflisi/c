
CC=gcc
CFLAGS=-g -Wall
OBJS=main.o reverse.o elemtype.o list.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



