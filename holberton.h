#ifndef header_file
#define header_file

#include <stdarg.h>
/**
 * struct typeprint - create libraries
 * @typec: char
 * @fun: point void of lista
 * Description: struct
 */
typedef struct typeprint
{
	char typec;
	int (*fun)(va_list lista);
} typedate;

int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printf(const char *format, ...);
int  printString(va_list lista);
int printChar(va_list lista);
int printDecimal(va_list lista);
int printInteger(va_list lista);
int printBinary(va_list lista);
#endif /* Libraries Printf Giovanni and Lina */
