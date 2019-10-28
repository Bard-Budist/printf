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
int  decimal;

unsigned int cont, cont2, num, aux;

cont = 0;

decimal = va_arg(lista, int);
if (decimal < 0)
{
num = (decimal * -1); /* (decimial * -1) */
cont += _putchar('-');
}
else
{
num = decimal;
}
aux =  num;
cont2 = 1;
while (aux > 9)
{
aux /= 10;
cont2 *= 10;
}
while (cont2 >= 1)
{
cont += _putchar(((num / cont2) % 10) + '0'); /* ASCII '0 = '48 */
cont2 /= 10;
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
	return (printDecimal(lista));
}
