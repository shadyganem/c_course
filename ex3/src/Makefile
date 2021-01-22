DEPENDENCIES = convert.o 
CC = gcc
FLAGS = -Wall
TARGET := convert

$(TARGET): $(DEPENDENCIES)
	$(CC) $(FLAGS) -o $@ $(DEPENDENCIES) 

main.o: convert.c version.h
	$(CC) $(FLAGS) -c convert.c

clean:
	rm *.o $(TARGET)
