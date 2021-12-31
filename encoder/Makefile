
CC=gcc
CFLAGS=-g -Wall
OBJS=decode.o encode.o main.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main -lm


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



