#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers between 0 - 9.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
