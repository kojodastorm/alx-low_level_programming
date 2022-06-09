#include "main.h"

/**
 * print_triangle - print a square with size  size of #
 *
 * @size: height integer
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		k = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

