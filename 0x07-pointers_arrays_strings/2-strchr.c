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
	int i = 0;
	char *loc;

	loc = s;

	while (*(s + i) != c && *(s + i) != '\0')
	{
		i++;
		continue;
	}

	loc = s + i;

	return (loc);
}
