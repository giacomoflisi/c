
CC=gcc
CFLAGS=-g -Wall
OBJS=vettore.o elemtype.o main.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main -fsanitize=address -fno-omit-frame-pointer


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



