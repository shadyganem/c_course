#ifndef RDATA_H 

#define MAX_CHAR 127 
#define MIN_CHAR -128
#define MAX_UNSIGNED_CHAR 256
#define MIN_UNSIGNED_CHAR 0
#define MAX_INT 2147483648
#define MIN_INT -214483648
#define MAX_UNSIGNED_INT 4294967295
#define MIN_UNSIGNED_INT 0
#define MAX_SHORT 32767
#define MIN_SHORT -32767
#define MAX_UNSIGNED_SHORT 65535
#define MIN_UNSIGNED_SHORT 0
#define MAX_LONG 9223372036854775807
#define MIN_LONG -9223372036854775808
#define MAX_UNSIGNED_LONG 18446744073709551615
#define MIN_UNSIGNED_LONG 0 

int random_sign_create(void);
char random_char_create(void);
unsigned char random_unsigned_char_create(void);
short random_short_create(void);
unsigned short random_unsigned_short_create(void);
int random_int_create(void);
unsigned int random_unsigned_int_create(void);
long random_long_create(void);
unsigned long random_unsigned_long_create(void);
float random_float_create(void);
double random_double_create(void);
long double random_long_double_create(void);
#endif
