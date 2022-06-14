#include "main.h"

/**
 * _strlen - this will return the length of a string
 *@s: points to the address of string passed to it.
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s = s + 1;
	}

	return (i);
}
