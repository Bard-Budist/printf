#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * printString - Print String
 * @lista: Var list
 */
void printString(va_list lista)
{
<<<<<<< HEAD
	int cs = 0;
	char *string = va_arg(lista, char*);

	if (string != NULL)
	{
		while (string[cs] != '\0')
			cs++;
		write(1, string, cs);
	}
=======
int cs = 0;
char *string = va_arg(lista, char*);

if (string != NULL)
{
while (string[cs] != '\0')
cs++;
write(1, string, cs);
}
>>>>>>> 84ff6b2ecec0818096e1c7a2f788aa3909516089
}

/**
* printChar - Print String
* @lista: Var list
*/
void printChar(va_list lista)
{
<<<<<<< HEAD
	char chart = va_arg(lista, int);

	if (chart != '\0')
		_putchar(chart);
}

/**
 * printPorce - Print String
 */

void printPorce()
{
	_putchar('%');
=======
char chart = va_arg(lista, int);

if (chart != '\0')
_putchar(chart);
}

/**
* printPorce - Print String
*/
void printPorce(void)
{
_putchar('%');
>>>>>>> 84ff6b2ecec0818096e1c7a2f788aa3909516089
}

/**
* _printf - Printf!!
* @format: Format
* Return: len
*
*/
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	const typedate tipos[] = {
		{'s', printString},
		{'c', printChar},
		{'%', printPorce},
	};
	int i = 0, j = 0;
	va_list list;

	va_start(list, format);
	while (format[i])
	{
		for (j = 0; j < 6; j++)
		{
			if (format[i] == '%' && format[i + 1] == tipos[j].typec)
			{
				tipos[j].fun(list);
				i += 2;
			}
		}
		_putchar(format[i]);
		i++;
	}
	return (i - 1);
=======
typedate tipos[] = {
{'s', printString},
{'c', printChar},
{'%', printPorce},
{'d', printDecimal},
{'i', printInteger},
{NULL, NULL}
};
int i = 0, j = 0;
va_list list;

va_start(list, format);
while (format[i])
{
for (j = 0; j < 6; j++)
{
if (format[i] == '%' && format[i + 1] == tipos[j].typec)
{
tipos[j].fun(list);
i += 2;
}
}
_putchar(format[i]);
i++;
}
return (i - 1);
>>>>>>> 84ff6b2ecec0818096e1c7a2f788aa3909516089
}
