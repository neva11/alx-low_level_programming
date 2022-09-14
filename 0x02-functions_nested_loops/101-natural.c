#include <stdio.h>

/**
 * main - sums 3-5_cous - Entry point
 *
 * Return:  (0)
 */

int main(void)
{
	int i = 0;
	int multiple_of_3 = 3;
	int multiple_of_5 = 5;
	int sum = 0;
	int limit = 1024;

	while (i == 0)
	{

		if (multiple_of_3 < limit)
		{
			sum += multiple_of_3;
			multiple_of_3 += 3;
		}

		if (multiple_of_5 < limit && (multiple_of_5 % 3) != 0)
		{
			sum += multiple_of_5;
			multiple_of_5 += 5;
		}
		else if (multiple_of_5 % 3 == 0)
		{
			multiple_of_5 += 5;
		}

		if (multiple_of_3 >= limit && multiple_of_5 >= limit)
		{
			i = 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
