#include "main.h"

/**
 * print_diagonal - print a diagonal line with height n of \
 *
 * @n: height integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}

	}
	_putchar('\n');
}

