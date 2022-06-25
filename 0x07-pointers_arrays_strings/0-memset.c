#include "main.h"

/**
 * _memset - fills up am area in memory
 * @s: memory areal
 * @b: constant byte
 * @n: amount of memory
 *
 * Return: charater pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
