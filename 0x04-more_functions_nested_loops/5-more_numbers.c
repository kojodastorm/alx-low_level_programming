#include "main.h"

/**
 * more_numbers - print from 0 - 9
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int j1;
	int j2;
	int adj = 48;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			/* j1 j2 */
			j2 = j % 10;
			j1 = j / 10;
			if (j1 > 0)
			{
				_putchar(j1 + adj);
			}
			_putchar(j2 + adj);
		}
		_putchar('\n');
	}
}

