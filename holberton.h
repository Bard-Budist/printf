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
	void (*fun)(va_list lista);
} typedate;

int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printf(const char *format, ...);
void printString(va_list lista);
void printChar(va_list lista);
void printPorce();
void printDecimal(va_list lista);
void printInteger(va_list lista);
void printBinary(va_list lista);
#endif /* Libraries Printf Giovanni and Lina */
