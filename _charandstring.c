#include "holberton.h"
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
	return (0);
}

