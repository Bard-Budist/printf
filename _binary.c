#include "holberton.h"
#include <stdarg.h>
/**
 * printBinary - Print number binary
 * @lista: List elemnts
 *
 */
int printBinary(va_list lista)
{
	int number = va_arg(lista, int);
	int i = 0, j, divi, temp = number, contador = 0;

	while (temp > 0)
	{
		temp /= 2;
		divi++;

	}
	for (i = 0; i < divi; i++)
	{
		temp = number;
		for (j = (divi - i); j > 1; j--)
		{
			temp /= 2;
		}
		_putchar((temp % 2) + '0');
		contador++;
	}
	return (contador);
}
