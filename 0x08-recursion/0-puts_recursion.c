#include "main.h"

/**
 * _puts_recursion - out puts a string with recursion
 *
 * @s: string to output
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
