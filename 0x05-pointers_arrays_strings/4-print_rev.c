#include "main.h"

/**
 * print_rev - this will print a string in reverse
 *@s: points to the address of string passed to it.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s = s + 1;
	}
	i--;

	while (i >= 0)
	{
		s = s - 1;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
