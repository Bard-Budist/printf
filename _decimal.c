#include "holberton.h"
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
