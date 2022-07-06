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
	_putchar(*s++);
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
