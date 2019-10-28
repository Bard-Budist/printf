#include "holberton.h"
#include <stdarg.h>
/**
 * printBinary - Print number binary
 * @lista: List elemnts
 * Return: contador
 */
int printBinary(va_list lista)
{
unsigned int i, cont, num, bin, p[32];

i = 0, cont = 0;
num = va_arg(lista, int);

if (num < 1)
{
_putchar(48);
cont++;
return (cont);
}
else
{
while (num > 0)
{
bin = num % 2;
num /= 2;
p[cont] = bin;
cont++;
}
i = cont - 1;
while (i > 0)
{
_putchar('0' + p[i]);
i--;
}
_putchar('0' + p[i]);
}
return (cont);
}
