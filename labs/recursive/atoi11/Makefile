
CC=gcc
CFLAGS=-g -Wall
OBJS=main.o atoi.o 
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -lm -o main


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



