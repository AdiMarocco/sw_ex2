CC = gcc
CFLAGS = -Wall -g

.PHONY: all clean loops recursives loopd recursived
all: 



#.o files
main.o: main.c	my_mat.h
		$(CC) $(CFLAGS) -c $^
my_mat.o: main.c my_mat.h
		$(CC) $(CFLAGS) -c $^


clean:
	rm -f *.o *.so *.a maindloop mains maindrec




