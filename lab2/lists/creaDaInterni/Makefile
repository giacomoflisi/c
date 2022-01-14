
CC=gcc
CFLAGS=-g -Wall
OBJS=elemtype.o list.o main.o crea_da_interni.o 
BIN = main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main -lm


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o main



