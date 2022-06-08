#include <stdio.h>

/**
 *main - sums multiples of 3 and 5 below 1024
 *
 *Return: void (Success)
 */

int main(void)
{
	long double num = 1;
	long double oldtmp = 2;
	long double newtmp = 2;
	int i;

	printf("1, 2");
	num = 3;
	for (i = 1; i <= 96; i++)
	{
		printf(", %.0Lf", num);
		newtmp = num;
		num += oldtmp;
		oldtmp = newtmp;
	}
	printf("\n");
	return (0);
}
