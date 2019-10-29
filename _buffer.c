#include "holberton.h"
/**
 * _littleBuffer - Buffer
 *
 * Return: Char *
 *
*/
char *_littleBuffer(void)
{
	char *buffer = malloc(1024);

	write(1, buffer, 1024);
	return (buffer);
}
