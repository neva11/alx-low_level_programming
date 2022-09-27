#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @p: pointer to put the constant
 * @b: constant
 * @max_byte: max bytes to use
 * Return: p
 */

char *_memset(char *p, char b, unsigned int max_byte)
{
	unsigned int i;

	for (i = 0; max_byte > 0; i++, max_byte--)
	{
		p[i] = b;
	}

	return (p);
}
