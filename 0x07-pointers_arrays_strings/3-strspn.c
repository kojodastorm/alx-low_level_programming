#include "main.h"

/**
 * _strspn - writes a length of preffix substring
 * @s: main string
 * @accept: substring
 *
 * Return: unsingned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				break;
			}
		}
		if (*(accept + j) == '\0')
		{
			return (i);
		}
	}

	return (i);
}
