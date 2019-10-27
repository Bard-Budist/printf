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
void printPorce(void)
{
	_putchar('%');
}

/**
 * printDecimal - Print Decimal
 * @lista: Var list
 * Return: number decimal
 */
int printDecimal(va_list lista)
{
	int cont = 0;
	long int decimal, cont2 = 1, num;

	decimal = va_arg(lista, int);
	if (decimal < 0)
	{
		decimal *= -1; /* (decimial * -1) */
		cont += _putchar('-');
	}
	if (decimal == 0)
	{
		_putchar('0'); /* ASCII '0 = '48 */
		return (1);
	}
	num = decimal;
	while (num > 9)
	{
		num /= 10;
		cont2 *= 10;
	}
	while (cont2 > 0)
	{
		cont += _putchar(((decimal / num) % 10) + '0'); /* ASCII '0 = '48 */
		num /= 10;
	}
	return (cont);
}

/**
 * printInteger - Print Decimal
 * @lista: Var list
 * Return: number decimal
 */
int printInteger(va_list lista)
{
	int cont = 0;
	long int integer, cont2 = 1, num;

	integer = va_arg(lista, int);
	if (integer < 0)
	{
		integer *= -1; /* (decimial * -1) */
		cont += _putchar('-');
	}
	if (integer == 0)
	{
		_putchar('0'); /* ASCII '0 = '48 */
		return (1);
	}
	num = integer;
	while (num > 9)
	{
		num /= 10;
		cont2 *= 10;
	}
	while (cont2 > 0)
	{
		cont += _putchar(((integer / num) % 10) + '0'); /* ASCII '0 = '48 */
		num /= 10;
	}
	return (cont);
}

/**
 * _printf - Printf!!
 * @format: Format
 * Return: len
 *
*/
int _printf(const char *format, ...)
{
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
}
