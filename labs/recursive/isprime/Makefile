
CC=gcc
CFLAGS=-g -Wall
OBJS=isprime.o 
BIN =isprime

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o isprime


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o isprime



