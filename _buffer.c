#include "holberton.h"
/**
 * _littleBuffer - Buffer
 * @size: Size
 * Return: Char *
 *
*/
char *_littleBuffer(int size)
{
	char *buffer = malloc(1024 * size);

	if (buffer == NULL)
	return (NULL);

	return (buffer);
}
