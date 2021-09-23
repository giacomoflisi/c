
CC=gcc
CFLAGS=-g -Wall
OBJS=catalan.o
BIN = catalan

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o catalan


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o catalan



