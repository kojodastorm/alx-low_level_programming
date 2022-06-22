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
	int n = 0;

	for (i = 0; *(s1 + i + 1) != '\0' && *(s2 + i + 1) != '\0'; i++)
	{
		n = n + (*(s1 + i) - *(s2 + i));
		if (n != 0)
		{
			break;
		}
	}

	return (n);
}
