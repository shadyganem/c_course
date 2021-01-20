DEPENDENCIES = convert.o argsparser.o
CC = gcc
FLAGS = -Wall
TARGET := converter

$(TARGET): $(DEPENDENCIES)
	$(CC) $(FLAGS) -o $@ $(DEPENDENCIES) 

main.o: convert.c version.h
	$(CC) $(FLAGS) -c convert.c

argparser.o: argparser.c argparser.h
	$(CC) $(FLAGS) -c argparser.c
