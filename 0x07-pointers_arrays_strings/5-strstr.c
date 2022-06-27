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
	char *n = needle;
	char *h = haystack;
	i = 0;

	for (j = 0; *(h + j) != '\0'; j++)
	{
		if (*(n + i) == *(h + j))
		{
			for (i = 0; *(n + i) != '\0'; i++)
			{
				if (*(n + i) == *(h + j + i))
				{
					if (*(n + i + 1) == '\0')
					{
						return (h + j);
					}
					continue;
				}
				else
				{
					i = 0;
					break;
				}
			}
		}
	}
	return ("0");
}
