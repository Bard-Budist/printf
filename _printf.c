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
	int cs = 0;
	char *string = va_arg(lista, char*);

	if (string != NULL)
	{
		while (string[cs] != '\0')
			cs++;
		write(1, string, cs);
	}
}

/**
 * printChar - Print String
 * @lista: Var list
 */
void printChar(va_list lista)
{
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
}
/**
 * _printf - Printf!!
 * @format: Format
 * Return: len
 *
 */
int _printf(const char *format, ...)
{
	const typedate tipos[] = {
		{'s', printString},
		{'c', printChar},
		{'%', printPorce},
		{'i', printInteger},
		{'d', printDecimal}
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
}
