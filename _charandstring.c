#include "holberton.h"
/**
 * printString - Print String
 * @lista: Var list
 * Return: 0
 */
int printString(va_list lista)
{
<<<<<<< HEAD
int i, cont = 0;
char *string;

string = va_arg(lista, char *);
if (string == NULL)
string = "(null)";

for (i = 0; string[i]; i++)
cont += _putchar(string[i]);

return (cont);
=======
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
>>>>>>> 4291ad51e50f0d171dfe32ae1524d00b2cf47715
}
/**
 * printChar - Print String
 * @lista: Var list
 * Return: 0
 */
int printChar(va_list lista)
{
<<<<<<< HEAD
int cs = va_arg(lista, int);

return (_putchar(cs));
=======
	char chart = va_arg(lista, int);

	if (chart == 0)
	{
		_putchar(chart);
		return (1);
	}
	return (0);
>>>>>>> 4291ad51e50f0d171dfe32ae1524d00b2cf47715
}

