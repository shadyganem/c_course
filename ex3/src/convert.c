/**
 * @author Shady Ganem <shadyganem@gmail.com>
 *
 * this portgram converts units. 
 **/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "version.h"

#define HANDLER_ELEMENT_SIZE 24 
#define STATUS_OK 0 

static unsigned int m_to_cm(double meters);
static unsigned int m_to_nm(double meters);
static unsigned int C_to_F(double degrees);
static unsigned int F_to_C(double degrees);
static void input_error_exit();

static const struct 
{
	char * in_unit;
	char * out_unit;
	unsigned int (*callback)(double input);
} handler[] = { {"-m", "-cm", m_to_cm},
		{"-m", "-nm", m_to_nm}, 
		{"-C", "-F" , C_to_F },
		{"-F", "-C" , F_to_C }};

static int G_num_of_el = sizeof(handler)/HANDLER_ELEMENT_SIZE;	

static double string_to_double(const char * input_arg)
{
	bool period_flag = false;
	//first: check if the number contains only digits
	for (int i = 0; i < strlen(input_arg); i++)
	{
		if (input_arg[i] < '0' || input_arg[i] > '9')
		{
			if (input_arg[i] == '.' && period_flag == true)
			{	
				printf("input error: input value must be a number");
				input_error_exit();
			}
			else
			{
				period_flag = true;
			}
		}
	}
	char *end_ptr;	
	return strtod(input_arg, &end_ptr);
}	

static unsigned int F_to_C(double degrees)
{
	double TC = (degrees - 32)/1.8;
	printf("%f F = %f C\n", degrees, TC);
	return STATUS_OK;
}
static unsigned int C_to_F(double degrees)
{
	double TF = (degrees*1.8)+32;
	printf("%f C = %f F\n", degrees, TF);
	return STATUS_OK;
}

static unsigned int m_to_cm(double meters)
{
	printf("%f m = %f cm\n", meters, meters*100);
	return STATUS_OK;
}

static unsigned int m_to_nm(double meters)
{
	printf("%lf m = %lf nm\n", meters, meters*1000000000);
	return STATUS_OK;
}

static void print_units_list_and_exit()
{
	printf("The available units for conversion\n");
	for (int i = 0; i < G_num_of_el; i++)
	{
		printf("%s to %s\n", handler[i].in_unit, handler[i].out_unit); 
	}
	exit(0);
}
	
static void print_help_and_exit()
{
	printf("convert takes 3 arguments\n");
	printf("1) orgin unit flag \n");
	exit(0);
}

static void print_version_and_exit()
{
	printf("convert v%s\n", G_Version);
	exit(0);
}

// will print an error message and exits with code 1 
static void input_error_exit()
{
	fprintf(stderr,
		"convert: bad command line argument(s)\n"
		"For more information run convert -h\n");
	exit(1);
}

int main(int argc, char **argv)
{
	unsigned int (*callback)(double input);
	double amount = 0;
	//skping the fist arg
	argv++;
	argc--;
	if (argc == 0)
	{
		input_error_exit();
	}	
	if (strcmp(argv[0], "-l") == 0)
	{
		print_units_list_and_exit();
	}
	if (strcmp(argv[0], "-v") == 0)
	{
		print_version_and_exit();
	} 
	else if (strcmp(argv[0], "-h") == 0)
	{
		print_help_and_exit();
	}
	else
	{
		amount = string_to_double(argv[1]);
		int i = 0;
		while (true)
		{
			if (i == G_num_of_el)
				input_error_exit();
			if (strcmp(handler[i].in_unit, argv[0]) == 0)
			{
				if (strcmp(handler[i].out_unit, argv[2]) == 0)	
				{
					callback = handler[i].callback;
					break;
				}
			}
			i++;
		}
		callback(amount);
	}
	return 0;
}

