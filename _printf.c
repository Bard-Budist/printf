#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 *  * printString - Print String
 *   * @lista: Var list
 *    */
int printString(va_list lista)
{
	int cs = 0;
	char *string = va_arg(lista, char*);

	if (string != NULL)
	{
		while (string[cs] != '\0')
			cs++;
		write(1, string, cs);
		return (cs);
	}
	return (0);
}

/**
 *  * printChar - Print String
 *   * @lista: Var list
 *    */
int printChar(va_list lista)
{
	char chart = va_arg(lista, int);

	if (chart != '\0')
	{
		_putchar(chart);
		return (1);
	}
	return (0);
}

/**
 *  * printPorce - Print String
 *   * @lista: Parameter
 *    */

int printPorce(va_list lista)
{
	char porce = va_arg(lista, int);

	if (porce != '\0')
		_putchar('%');
	return (1);
}
/**
 *  * _printf - Printf!!
 *   * @format: Format
 *    * Return: len
 *     *
 *      */
int _printf(const char *format, ...)
{
	const typedate tipos[] = {
		{'s', printString},
		{'c', printChar},
		{'%', printPorce},
		{'i', printInteger},
		{'d', printDecimal},
		{'b', printBinary}
	};
	int i = 0, j = 0, cont = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		for (j = 0; j < 6; j++)
		{
			if (format[i] == '%' && format[i + 1] == tipos[j].typec)
			{
				cont += tipos[j].fun(list);
				i += 2;
			}
		}
		_putchar(format[i]);
		i++;
	}
	return (i + cont);
}
