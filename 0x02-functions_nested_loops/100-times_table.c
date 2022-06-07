#include "main.h"
/**
 *print_times_table - prints the n times table
 *@n: number table to print
 *
 *Return: void (Success)
 */
void print_times_table(int n)
{
	int a = 0;
	int d = 0;
	int c = 0;
	int b1;
	int b2;
	int b3;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (d = 0; d <= n; d++)
			{
				if (d > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				c = a * d;
				b3 = c % 10 + 48;
				b2 = c / 10;
				b1 = b2 / 10 + 48;
				b2 = b2 % 10 + 48;
				/*Number is b1 b2 b3*/
				if (d == 0)
				{
					_putchar(b3);
				}
				else
				{
					if (b1 > 48)
					{
						_putchar(b1);
					}
					else
					{
						_putchar(' ');
					}
					if (b2 > 48)
					{
						_putchar(b2);
					}
					else if (b1 > 48)
					{
						_putchar(b2);
					}
					else
					{
						_putchar(' ');
					_putchar(b3);
				}
			}
			_putchar('\n');
		}
	}
}
