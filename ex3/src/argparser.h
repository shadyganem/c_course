#ifndef ARGPARSER_H
#include <stdbool.h>

typedef enum 
{
	Str,
	Int,
	Float,
}ArgType;

struct argument
{
	bool required;
	ArgType type;
};

#endif
