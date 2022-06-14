#include "main.h"

/**
 * puts_half - this will print half a string
 *@str: points to the address of string passed to it.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int k;

	for (i = 0; *str != '\0'; i++)
	{
		str = str + 1;
	}
	str = str - i;
	i--;
	k = i;

	if (i % 2 == 0)
	{
		k = i / 2;
	}
	else
	{
		k = (i - 1) / 2;
	}

	for (i = 0; *str != '\0'; i++)
	{
		if (i > k)
		{
			_putchar(*str);
		}
		str = str + 1;
	}
	_putchar('\n');
}
