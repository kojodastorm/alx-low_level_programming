#include <stdio.h>

/**
 *main - sums multiples of 3 and 5 below 1024
 *
 *Return: void (Success)
 */

int main(void)
{
	int i;
	unsigned long p1num = 0;
	unsigned long p2num = 3;
	unsigned long p1ot = 0;
	unsigned long p2ot = 2;
	unsigned long p1nt = 0;
	unsigned long p2nt = 2;
	unsigned long rem = 1000000000;

	printf("1, 2");
	for (i = 1; i <= 96; i++)
	{
		if (p1num > 0)
		{
			printf(", %lu", p1num);
		}
		else
		{
			printf(", ");
		}
		printf("%lu", p2num);
		p2nt = p2num;
		p1nt = p1num;
		p2num += p2ot;
		p1num += (p2num / rem) + p1ot;
		p2num %= rem;
		p2ot = p2nt;
		p1ot = p1nt;
	}
	printf("\n");
	return (0);
}
