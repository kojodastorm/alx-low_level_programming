#include "main.h"

/**
 * _strcmp - compair 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: character
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		j += *(s1 + i);
	}
	
	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		k += *(s2 + i);
	}
	j -= k;

	return (j);
}
