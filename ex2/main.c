
#include <stdio.h>
#include <stdlib.h>
#include "rdata.h"
#include <time.h>
#define PLACE_HOLDER_WIDTH 30
static void print_intro(const char *str)
{
	printf("--------------------------------------------------------------------------------\n");
	printf("\n");
	printf("%44s\n", str);
	printf("--------------------------------------------------------------------------------\n");
}

static void print_table(void)
{
	printf("---------------------------------------------------\n");
	printf("char:\n");
	printf("MAX value = %d\n", MAX_CHAR);
	printf("MIN value = %d\n", MIN_CHAR);
	printf("unsigned char:\n");
	printf("MAX value = %d\n", MAX_UNSIGNED_CHAR);
	printf("MIN value = %d\n", MIN_UNSIGNED_CHAR);
	printf("int:\n");
	printf("MAX value = %d\n", MAX_INT);
	printf("MIN value = %d\n", MIN_INT);
	printf("unsigned int:\n");
	printf("MAX value = %d\n", (unsigned int)MAX_UNSIGNED_INT);
	printf("MIN value = %d\n", (unsigned int)MIN_UNSIGNED_INT);
	printf("long:\n");
	printf("MAX value = %ld\n", MAX_LONG);
	printf("MIN value = %ld\n", MIN_LONG);
	printf("unsigned long:\n");
	printf("MAX value = %ld\n", (unsigned long)MAX_UNSIGNED_LONG);
	printf("MIN value = %ld\n", (unsigned long int)MIN_UNSIGNED_LONG);
	printf("float:\n");
	printf("MAX value = %s\n", MAX_FLOAT);
	printf("MIN value = %s\n", MIN_FLOAT);
	printf("double:\n");
	printf("MAX value = %s\n", MAX_DOUBLE);
	printf("MIN value = %s\n", MIN_DOUBLE);
	printf("long double:\n");
	printf("MAX value = %s\n", MAX_LONG_DOUBLE);
	printf("MIN value = %s\n", MIN_LONG_DOUBLE);
	printf("---------------------------------------------------\n");
}

int main(int argc, char *charv[])
{
	srand(time(0));
	print_intro("Data Types in C");
	printf("data type         | random value\n");
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
	print_table();
	return 0;
}
