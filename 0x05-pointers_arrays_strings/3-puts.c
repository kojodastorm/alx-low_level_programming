#include "main.h"

/**
 * _puts - this will print a string
 *@str: points to the address of string passed to it.
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
