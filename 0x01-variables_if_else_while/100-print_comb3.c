#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int zero;
	int comma;
	int space;
	int newline;

	zero = 48;
	comma = 44;
	space = 32;
	newline = 10;
	for (a = zero; a < zero + 10; a++)
	{
		for (b = a + 1; b < zero + 10; b++)
		{
			if (a >= zero && b > zero + 1)
			{
				putchar(comma);
				putchar(space);
			}
			putchar(a);
			putchar(b);
		}
	}
	putchar(newline);

	return (0);
}
