#include "main.h"
/**
 *jack_bauer - prints the last digit of the number
 *
 *Return: int (Success)
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int h1;
	int h2;
	int m1;
	int m2;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			h2 = a % 10 + 48;
			h1 = a / 10 + 48;
			m2 = b % 10 + 48;
			m1 = b / 10 + 48;
			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar(10);
		}
	}
}
