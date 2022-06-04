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
	int d;
	int digit1;
	int digit2;
	int zero;
	int comma;
	int space;
	int newline;

	zero = 48;
	comma = 44;
	space = 32;
	newline = 10;
	for (digit1 = 0; digit1 < 100; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 100; digit2++)
		{
			if (digit1 >= 0 && digit2 > 1)
			{
				putchar(comma);
				putchar(space);
			}
			/*ab cd*/
			a = (digit1 / 10) + zero;
			b = (digit1 % 10) + zero;
			c = (digit2 / 10) + zero;
			d = (digit2 % 10) + zero;
			putchar(a);
			putchar(b);
			putchar(space);
			putchar(c);
			putchar(d);
		}
	}
	putchar(newline);

	return (0);
}
