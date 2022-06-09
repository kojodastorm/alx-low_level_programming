#include "main.h"

/**
 * print_numbers - print from 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (!(i != 50 || i != 52))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

