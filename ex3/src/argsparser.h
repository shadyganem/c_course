#ifndef ARGSPARSER_H
#define ARGSPARSER_H

#include <stdbool.h>

typedef enum 
{
	Str,
	Int,
	Float,
} ArgType;

typedef enum
{
	Required,
	Optional
} ArgReq;

unsigned int argsparser_add_argument(ArgType Type, char * ArgString, ArgReq ReqOption, char * HelpMessage);
bool argsparser_check_arg(char * ArgString);

#endif
