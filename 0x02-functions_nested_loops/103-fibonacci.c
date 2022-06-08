#include <stdio.h>

/**
 *main - sums multiples of 3 and 5 below 1024
 *
 *Return: void (Success)
 */

int main(void)
{
	long int num = 1;
	long int oldtmp = 2;
	long int newtmp = 2;
	long int sum = 2;

	num = 3;
	while (num <= 4000000)
	{
		if (num % 2 == 0)
		{
			sum += num;
		}
		newtmp = num;
		num += oldtmp;
		oldtmp = newtmp;
	}
	printf("%ld\n", sum);
	return (0);
}
