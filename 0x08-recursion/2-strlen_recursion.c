#include "main.h"

/**
 * _strlen_recursion - outputs string length
 *
 * @s: string to count
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		s++;
		n = _strlen_recursion(s);
		return (1 + n);
	}
	return (0);
}
