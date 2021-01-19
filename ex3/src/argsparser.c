
#include "argsparser.h"

typedef struct 
{
	ArgReq required;
	ArgType type;
} argument;

// global static allocation 
static argument args[10];

unsigned int argsparser_add_argument(ArgType Type, char * ArgString, ArgReq ReqOption, char * HelpMessage);
