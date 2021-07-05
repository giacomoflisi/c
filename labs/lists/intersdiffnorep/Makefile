
CC=gcc
CFLAGS=-g -Wall
OBJS=elemtype.o list.o main.o no_rep.o 
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm a.out *.o main



