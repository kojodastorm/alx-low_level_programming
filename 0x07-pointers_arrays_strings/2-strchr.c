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
	}

	if (c != '\0' && *(s + i) == '\0')
	{
		return (NULL);
	}
	else
	{
		loc = s + i;
		return (loc);
	}
}
