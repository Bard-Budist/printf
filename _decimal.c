#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * printDecimal - Print Decimal
 * @lista: Var list
 * Return: number decimal
 */
int printDecimal(va_list lista)
{
	int contador = 0;

	long int decimal, cont2 = 1, num;

	decimal = va_arg(lista, int);
	if (decimal < 0)
	{
		decimal *= -1; /* (decimial * -1) */
		_putchar('-');
		contador++;
	}
	if (decimal == 0)
	{
		_putchar('0'); /* ASCII '0 = '48 */
		contador++;
	}
	num = decimal;
	while (num > 9)
	{
		num /= 10;
		cont2 *= 10;
	}
	while (cont2 > 0)
	{
		_putchar(((decimal / cont2) % 10) + '0'); /* ASCII '0 = '48 */
		cont2 /= 10;
		contador++;
	}
	return (contador);
}

/**
 * printInteger - Print Decimal
 * @lista: Var list
 * Return: number decimal
 */
int printInteger(va_list lista)
{
	int integer, cont2 = 1, num;
	int contador = 0;

	integer = va_arg(lista, int);
	if (integer < 0)
	{
		integer *= -1; /* (decimial * -1) */
		_putchar('-');
		contador++;
	}
	if (integer == 0)
	{
		_putchar('0'); /* ASCII '0 = '48 */
		contador++;
	}
	num = integer;
	while (num > 9)
	{
		num /= 10;
		cont2 *= 10;
	}
	while (cont2 > 0)
	{
		if (cont2 == 0)
		{
			_putchar((integer % 10) + '0');
		}
		else
			_putchar(((integer / cont2) % 10) + '0'); /* ASCII '0 = '48 */
		cont2 /= 10;
		contador++;
	}
	return (contador);
}
