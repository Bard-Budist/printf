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
<<<<<<< HEAD
	char typec;
	void (*fun)(va_list lista);
=======
char typec;
void (*fun)(va_list lista);
>>>>>>> 84ff6b2ecec0818096e1c7a2f788aa3909516089
} typedate;

int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printf(const char *format, ...);
void printString(va_list lista);
void printChar(va_list lista);
void printPorce();
int printDecimal(va_list lista);
int printInteger(va_list lista);
#endif /* Libraries Printf Giovanni and Lina */
