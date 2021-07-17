
CC=gcc
CFLAGS=-g -Wall
OBJS=main.o punti_in_cerchio.o 
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o -lm main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



