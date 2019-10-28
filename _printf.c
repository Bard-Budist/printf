#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * printString - Print String
 * @lista: Var list
 * Return: 0
 */
int printString(va_list lista)
{
	int cs = 0;
	char *string = va_arg(lista, char*);
	if (string == 0)
	{
		while (string[cs] != '\0')
		{
			_putchar(string[cs]);
			cs++;
		}
	}
	else
	{
		write(2, "Error", 5);
	}
	return (cs);
}

/**
 * printChar - Print String
 * @lista: Var list
 * Return: 0
 */
int printChar(va_list lista)
{
	char chart = va_arg(lista, int);

	if (chart == 0)
	{
		_putchar(chart);
		return (1);
	}
	else
	{
		write(2, "Error", 5);
	}
	return (0);
}
/**
 * _printf - Printf!!
 * @format: Format
 * Return: len
 */
int _printf(const char *format, ...)
{
	const typedate tipos[] = {
		{'s', printString},
		{'c', printChar},
		{'i', printInteger},
		{'d', printDecimal},
		{'b', printBinary}
	};
	int i = 0, j = 0, cont = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			for (j = 0; j < 5; j++)
			{
				if (format[i] == '%' && format[i + 1] == tipos[j].typec)
				{
					cont += tipos[j].fun(list);
					i++;
					break;
				}
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			cont += 1;

		}
		else
		{
			_putchar(format[i]);
			cont++;
		}
		i++;
	}
	va_end(list);
	return (cont);
}

