
CC=gcc
CFLAGS=-g -Wall
OBJS=bin.o 
BIN =bin

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o bin


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o bin



