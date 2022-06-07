#include <stdio.h>

/**
 *main - sums multiples of 3 and 5 below 1024
 *
 *Return: void (Success)
 */

int main(void)
{
	int num = 1;
	int oldtmp = 2;
	int newtmp = 2;
	int i;

	printf("1, 2");
	num = 3;
	for (i = 1; i <= 50; i++)
	{
		print (", %d", num);
		newtmp = num;
		num += oldtmp;
		oldtmp = newtmp;
	}
	return (0);
}
