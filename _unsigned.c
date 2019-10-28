#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * printUnsigned - Print Unsigned
 * @lista: Var list
 * Return: number u
 */
int printUnsigned(va_list lista)
{
int *cont;
unsigned int num;

cont = malloc(sizeof(*cont));

if (!cont)
exit(-1);

*cont = 0;
num = va_arg(lista, unsigned int);

(*cont) = printUnsignedDigit(num, cont);

return (*cont);
}

/**
 * printUnsignedDigit - Print Unsigned
 * @num: int
 * @cont: int
 * Return: cont
 */
int printUnsignedDigit(unsigned int num, int *cont)
{
if (num / 10)
printUnsignedDigit(num / 10, cont);

(*cont) += _putchar((num % 10) + '0');
return (*cont);
}
