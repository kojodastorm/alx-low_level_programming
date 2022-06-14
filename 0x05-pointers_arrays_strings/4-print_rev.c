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
	s = s - 1;

	while (i >= 0)
	{
		_putchar(*s);
		s = s - 1;
		i--;
	}
	_putchar('\n');
}
