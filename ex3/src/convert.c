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

static const struct 
{
	char * in_unit;
	char * out_unit;
	unsigned int (*handler)(double input);
} input_handler[] = {{"-m",
		      "-cm",
			m_to_cm}};

static unsigned int string_to_double(const char * input_arg);

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
	void (*handler)(double input);
	//skping the fist arg
	argv++;
	argc--;
	if (argc == 0)
	{
		input_error_exit();
	}	
	num_of_el = sizeof(input_handler)/HANDLER_ELEMENT_SIZE;	
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
			
		}
	}

	
	return 0;
}


