#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
*/
int main(void)
{
	unsigned long int actual = 1;
	unsigned long int previous = 1;
	int i = 1;
	
	printf("%lu", previous);

	while (i < 50)
	{
		actual = actual + previous;
		previous = actual - previous;
		printf(", %lu", actual);
		i++;
	}
	printf("\n");
	return (0);
}
