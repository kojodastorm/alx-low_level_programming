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
	unsigned int i, j, n;
	n = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) != '\0' && *(s + j) == *(accept + i))
			{
				if (j > n)
				{
					n = j;
				}
				break;
			}
		}
	}

	return (n + 1);
}
