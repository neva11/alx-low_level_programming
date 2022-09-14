#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
*/
int main(void)
{
	unsigned int actual = 0;
	unsigned int previous = 1;
	int i = 1;
	
	printf("%u", previous);

	while (i < 50)
	{
		actual = actual + previous;
		previous = actual - previous;
		printf(", %u", actual);
		i++;
	}
	printf("\n");
	return (0);
}
