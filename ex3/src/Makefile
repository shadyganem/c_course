DEPENDENCIES = main.o argparser.o
CC = gcc
FLAGS = -Wall
TARGET := converter

$(TARGET): $(DEPENDENCIES)
	$(CC) $(FLAGS) -o $@ $(DEPENDENCIES) 

main.o: main.c version.h
	$(CC) $(FLAGS) -c main.c

argparser.o: argparser.c argparser.h
	$(CC) $(FLAGS) -c argparser.c
