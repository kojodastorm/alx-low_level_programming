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
	int i;

	printf("1, 2");
	num = 3;
	for (i = 1; i <= 47; i++)
	{
		printf(", %ld", num);
		newtmp = num;
		num += oldtmp;
		oldtmp = newtmp;
	}
	return (0);
}
