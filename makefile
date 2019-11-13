CC = gcc
ifeq ($(DEBUG),"true")
	CFLAGS = -g
endif

all: main.o
	$(CC) $(CFLAGS) -o program main.o
main.o: main.c
	$(CC) -c  $(CFLAGS) main.c

run:
	./program
