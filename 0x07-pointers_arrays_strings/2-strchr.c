#include "main.h"

/**
 * _strchr - fills up am area in memory
 * @s: memory area
 * @c: character to search for
 *
 * Return: charater pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	char *loc;

	loc = s;

	for (i = 0; *(s + i) != c; i++)
	{
		continue;
	}

	loc = s + i;

	return (loc);
}
