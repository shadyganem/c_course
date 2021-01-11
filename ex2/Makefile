
CC= gcc
FLAGS= -Wall

data_types.run: main.o data.o 
	$(CC) $(FLFLAGS) -o data_types.run main.o data.o

main.o: main.c 
	$(CC) -c main.c 

data.o: data.c data.h
	$(CC) -c data.c

clean: 
	rm *.o
	rm *.run
