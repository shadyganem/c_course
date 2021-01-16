/**
 * @author Shady Ganem <shadyganem@gmail.com>
 *
 * this portgram converts units. 
 **/
#include <stdio.h>
#include "version.h"

void print_version(void)
{
	printf("convert v%s\n", VERSION);
}

int main(int argc, char **argv)
{

	print_version();
	return 0;
}


