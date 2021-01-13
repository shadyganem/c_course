
#include "rdata.h"
#include "stdio.h"
#include <stdlib.h>

int random_sign_create(void)
{
	return rand()%2 == 0 ? -1 : 1;
}

char random_char_create(void)
{
	unsigned int random = rand() % 256;
	return (char)(random - 127);
}

unsigned char random_unsigned_char_create(void)
{
	return (char)(rand() % 256);
}

short random_short_create(void)
{
	unsigned int random = rand() % MAX_SHORT;
	return (short)(random - MAX_SHORT); 
}

unsigned short random_unsigned_short_create(void)
{
	return rand() % MAX_UNSIGNED_SHORT;
}

int random_int_create(void)
{
	int sign = random_sign_create();
	unsigned int random = rand();
	return (int)(random - MAX_INT) * sign;
}

unsigned int random_unsigned_int_create(void)
{
	return rand();
}

long random_long_create(void)
{
	int sign = rand()%2 == 0? 1 : -1;
	int random = rand();
	long r_long = random;	
	random = rand();
	r_long = (r_long << 32) | random;
	return r_long * sign;
}

unsigned long random_unsigned_long_create(void)
{
	int random = rand();
	long r_long = random;	
	random = rand();
	r_long = (r_long << 32) | random;
	return r_long;
}

float random_float_create(void)
{
	int sign = random_sign_create();
	int integer = random_short_create();
	int denominatore = rand();
	int numerator = rand(); 
	return (float)sign*numerator/denominatore + integer;
}

double random_double_create(void)
{
	int sign = random_sign_create();
	int integer = random_int_create();
	int denominatore = rand();
	int numerator = rand(); 
	return (double)sign*numerator/denominatore + integer;
}

long double random_long_double_create(void)
{
	int sign = random_sign_create();
	int integer = random_long_create();
	int denominatore = rand();
	int numerator = rand(); 
	return (long double)sign*numerator/denominatore + integer;
}

