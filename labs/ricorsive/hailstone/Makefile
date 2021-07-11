
CC=gcc
CFLAGS=-g -Wall
OBJS=hailstone.o 
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o hailstone


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o hailstone



