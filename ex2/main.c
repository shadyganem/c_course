
#include <stdio.h>
#include "data.h"

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
	PrintIntro("Data Types in C");
	char character = create_random_char();
	printf("character = %c\n", character);
	unsigned char U_character = create_random_unsigned_char();
	printf("unsigned charater = %c\n", U_character);
	int integer = create_random_int();
	printf("integer = %d\n", integer);
	float floating_piont = create_random_float();
	printf("floating point = %f\n", floating_piont);

	return 0;
}
