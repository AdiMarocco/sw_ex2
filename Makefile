
CC = gcc
CFLAGS = -Wall -g

all: connections

# link o files to executable file 
connections: main.o my_mat.o
	$(CC) $(CFLAGS) -o connections main.o my_mat.o 


# create o files
main.o: main.c	my_mat.h
	$(CC) $(CFLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c


.PHONY: all clean 

clean:
	rm -f *.o *.so *.a connections