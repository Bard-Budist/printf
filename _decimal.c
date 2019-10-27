#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * printDecimal - Print Decimal
 * @lista: Var list
 * Return: number decimal
 */
void printDecimal(va_list lista)
{
	long int decimal, cont2 = 1, num;

	decimal = va_arg(lista, int);
	if (decimal < 0)
	{
		decimal *= -1; /* (decimial * -1) */
		_putchar('-');
	}
	if (decimal == 0)
	{
		_putchar('0'); /* ASCII '0 = '48 */
	}
	num = decimal;
	while (num > 9)
	{
		num /= 10;
		cont2 *= 10;
	}
	while (cont2 > 0)
	{
		_putchar(((decimal / num) % 10) + '0'); /* ASCII '0 = '48 */
		num /= 10;
	}
}

/**
 * printInteger - Print Decimal
 * @lista: Var list
 * Return: number decimal
 */
void printInteger(va_list lista)
{
	int integer, cont2 = 1, num;

	integer = va_arg(lista, int);
	if (integer < 0)
	{
		integer *= -1; /* (decimial * -1) */
		_putchar('-');
	}
	if (integer == 0)
	{
		_putchar('0'); /* ASCII '0 = '48 */
	}
	num = integer;
	while (num > 9)
	{
		num /= 10;
		cont2 *= 10;
	}
	while (cont2 > 0)
	{
		_putchar(((integer / num) % 10) + '0'); /* ASCII '0 = '48 */
		num /= 10;
	}
}
