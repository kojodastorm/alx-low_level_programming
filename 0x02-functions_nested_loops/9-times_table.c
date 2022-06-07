#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: void (Success)
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int b1;
	int b2;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			c = a * b;
			b2 = c % 10 + 48;
			b1 = c / 10 + 48;
			if (b1 > 48)
			{
				_putchar(b1);
			}
			else
			{
				_putchar(' ');
			}
			_putchar(b2);
		}
		_putchar('\n');
	}
}
