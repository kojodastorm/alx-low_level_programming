#include "main.h"

/**
 * _strstr - searches a string for a needle
 * @haystack: main string
 * @needle: substring
 *
 * Return: character pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *h = haystack;
	char *n = needle;

	if (*needle)
	{
		for (i = 0; *(h + i) != '\0'; i++)
		{
			if (*n == *(h + i))
			{
				for (j = 0; *(n + j) != '\0'; j++)
				{
					if (*(n + j) == *(h + i + j))
					{
						continue;
					}
					else
					{
						break;
					}
				}
				if (*(n + j) == '\0')
				{
					return (h + i);
				}
			}
		}
	}
	return (0);
}
