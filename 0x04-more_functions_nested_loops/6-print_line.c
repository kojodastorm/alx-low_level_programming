#include "main.h"

/**
 * print_line - print a line with length n of _
 *
 * @n: length integer
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

