
CC= gcc
FLAGS= -Wall

data_types.run: main.o data.o 
	$(CC) $(FLAGS) -o data_types.run main.o data.o

main.o: main.c 
	$(CC) $(FLAGS) -c main.c 

data.o: data.c data.h
	$(CC) $(FLAGS) -c data.c

clean: 
	rm *.o
	rm *.run
