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
	int c;
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
			for (c = b + 1; c < zero + 10; c++)
			{
				if (a >= zero && b > zero && c > zero + 2)
				{
					putchar(comma);
					putchar(space);
				}
				putchar(a);
				putchar(b);
				putchar(c);
			}
		}
	}
	putchar(newline);

	return (0);
}
