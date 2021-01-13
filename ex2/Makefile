
CC= gcc
FLAGS= -Wall
TARGET= data_types.run

all: $(TARGET)

$(TARGET): main.o rdata.o 
	$(CC) $(FLAGS) -o data_types.run main.o rdata.o

main.o: main.c 
	$(CC) $(FLAGS) -c main.c 

rdata.o: rdata.c rdata.h
	$(CC) $(FLAGS) -c rdata.c

clean: 
	rm *.o
	rm *.run
