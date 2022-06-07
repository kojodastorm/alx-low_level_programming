#include <stdio.h>

/**
 *main - sums multiples of 3 and 5 below 1024
 *
 *Return: void (Success)
 */

void main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
