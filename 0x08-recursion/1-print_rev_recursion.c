#include "main.h"

/**
 * _print_rev_recursion - outputs a string in reverse with recursion
 *
 * @s: string to output
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*--s);
	}
}
