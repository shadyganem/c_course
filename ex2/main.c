
#include <stdio.h>
#include <stdlib.h>
#include "rdata.h"
#include <time.h>

static void PrintIntro(const char *str)
{
	for (int i=0; i < 80; i++)
	{
		printf("-");
	}
	printf("\n");
	printf("%44s\n", str);
	for (int i=0; i < 80; i++)
	{
		printf("-");
	}
	printf("\n");
}

int main(int argc, char *charv[])
{
	srand(time(0));
	PrintIntro("Data Types in C");
	printf("data type         | random value\n");
	printf("---------------------------------------------------\n");
	// chars 
	char character = random_char_create();
	printf("character         | %d\n", character);
	unsigned char U_character = random_unsigned_char_create();
	printf("unsigned charater | %d\n", U_character);
	//int
	int integer = random_int_create();
	printf("integer           | %d\n", integer);
	unsigned int U_int = random_unsigned_int_create();
	printf("unsigned int      | %d\n", U_int);
	//short
	short short_int = random_short_create();
	printf("short             | %d\n", short_int);
	unsigned short U_short_int = random_unsigned_short_create();
	printf("unsiged short     | %d\n", U_short_int);
	//long 
	long long_int = random_long_create();
	printf("long              | %ld\n", long_int);
	unsigned long U_long_int = random_unsigned_long_create();
	printf("unsigned long     | %ld\n", U_long_int);
	//float
	float floating_piont = random_float_create();
	printf("float             | %f\n", floating_piont);
	double r_double = random_double_create();
	printf("double            | %f\n", r_double);
	long double r_long_double = random_long_double_create();
	printf("long double       | %Lf\n", r_long_double);	
	return 0;
}
