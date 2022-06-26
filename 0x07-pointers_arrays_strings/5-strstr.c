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

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				for (i = 1; *(needle + i) != '\0'; i++)
				{
					if (*(needle + i) == *(haystack + j + i))
					{
						continue;
					}
					else
					{
						return (NULL);
					}
				}

				return (haystack + j);
			}
		}
	}
	return (NULL);
}
