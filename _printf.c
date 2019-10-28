#include "holberton.h"
int opFunction(int cont, va_list list, const typedate tipos[],
const char *format)
{
	int i = 0, j = 0;
while (format && format[i])
{
	if (format[i] == '%' && format[i + 1] != '%')
	{
		for (j = 0; j < 7; j++)
		{
			if (format[i] == '%' && format[i + 1] == tipos[j].typec)
			{
				cont += tipos[j].fun(list);
				i++;
				break;
			}
		}
	}
	else if (format[i] == '%' && format[i + 1] == '%')
	{
		_putchar('%');
		i++;
		cont += 1;
	}
	else
	{
		_putchar(format[i]);
		cont++;
	}
	i++;
}
	return (cont);
}


/**
 * _printf - Printf!!
 * @format: Format
 * Return: len
 */
int _printf(const char *format, ...)
{
const typedate tipos[] = {
	{'s', printString}, {'c', printChar}, {'i', printInteger},
	{'d', printDecimal}, {'b', printBinary}, {'u', printUnsigned},
	{'o', printOctal}
};
int cont = -1;

if (format != NULL)
{

va_list list;

va_start(list, format);
if (format[0] == '%' && format[1] == '\0')
{
	return (-1);
}
cont = 0;
cont = opFunction(cont, list, tipos, format);

va_end(list);
}
return (cont);
}

