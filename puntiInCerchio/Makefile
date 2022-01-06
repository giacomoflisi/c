
CC=gcc
CFLAGS=-g -Wall
OBJS=punti_in_cerchio.o main.o
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main -lm


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



