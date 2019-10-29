#include "holberton.h"
/**
 * printString - Print String
 * @lista: Var list
 * Return: 0
 */
int printString(va_list lista)
{
int i, cont = 0;
char *string;

string = va_arg(lista, char *);

if (string == NULL)
string = "(null)";

for (i = 0; string[i] != '\0'; i++)
cont += _putchar(string[i]);

return (cont);
}
/**
 * printChar - Print String
 * @lista: Var list
 * Return: 0
 */
int printChar(va_list lista)
{
int cs = va_arg(lista, int);
_putchar(cs);
return (1);
}

