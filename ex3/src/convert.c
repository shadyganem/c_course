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
static void input_error_exit();

static const struct 
{
	char * in_unit;
	char * out_unit;
	unsigned int (*callback)(double input);
} handler[] = {{"-m",
	        "-cm",
        	m_to_cm}};

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

static unsigned int m_to_cm(double meters)
{
	printf("%f m = %f cm\n", meters, meters*100);
	return STATUS_OK;
}

static void print_help()
{
	printf("convert takes 3 arguments\n");
	printf("1) orgin unit flag \n");
}

static void print_version()
{
	printf("convert v%s\n", G_Version);
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
	int num_of_el = 0;
	unsigned int (*callback)(double input);
	double amount = 0;
	//skping the fist arg
	argv++;
	argc--;
	amount = string_to_double(argv[1]);
	if (argc == 0)
	{
		input_error_exit();
	}	
	num_of_el = sizeof(handler)/HANDLER_ELEMENT_SIZE;	
	if (strcmp(argv[0], "-v") == 0)
	{
		print_version();
	} 
	else if (strcmp(argv[0], "-h") == 0)
	{
		print_help();
	}
	else
	{
		for (int i = 0; i < num_of_el; i++)
		{
			if (strcmp(handler[i].in_unit, argv[0]) == 0)
			{
				if (strcmp(handler[i].out_unit, argv[2]) == 0)
				{
					callback = handler->callback;
				}
			}
			
		}
	}
	callback(amount);
	
	return 0;
}

