#ifndef header_file
#define header_file

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
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
/*Second function for _printf */
int opFunction(int cont, va_list list, typedate tipos[],
const char *format);
int printUnk(int i, int spaces, const char *format, int band);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printf(const char *format, ...);
int printString(va_list lista);
int printChar(va_list lista);
int printDecimal(va_list lista);
int printInteger(va_list lista);
int printBinary(va_list lista);
int printUnsigned(va_list lista);
int printUnsignedDigit(unsigned int num, int *cont);
int printOctal(va_list lista);
int printDigitOctal(unsigned int num, int *cont);
char *_littleBuffer(int size);
#endif /* Libraries Printf Giovanni and Lina */
