#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * printOctal - Print Octal
 * @lista: Var list
 * Return: number u
 */
int printOctal(va_list lista)
{
int *cont;
unsigned int num;

cont = malloc(sizeof(*cont));

if (!cont)
exit(-1);

*cont = 0;
num = va_arg(lista, unsigned int);

(*cont) = printDigitOctal(num, cont);

return (*cont);
}

/**
 * printDigitOctal - Print Unsigned
 * @num: int
 * @cont: int
 * Return: cont
 */
int printDigitOctal(unsigned int num, int *cont)
{
if (num / 8)
printDigitOctal(num / 8, cont);

(*cont) += _putchar((num % 8) + '0');
return (*cont);
}
