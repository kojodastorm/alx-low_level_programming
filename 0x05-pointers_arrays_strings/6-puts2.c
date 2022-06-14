#include "main.h"

/**
 * puts2 - this will print every other character in a string
 * @str: points to the address of string passed to it.
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str = str + 1;
	}
	_putchar('\n');
}
