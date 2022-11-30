<<<<<<< HEAD
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




=======
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
>>>>>>> 87e1b356a7d077a17141b2aa1793ed86b6c30fb8
