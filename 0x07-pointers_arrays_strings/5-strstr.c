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
				for (i = 0; *(needle + i) != '\0'; i++)
				{
					if (*(needle + i) == *(haystack + j + i))
					{
						 if (*(needle + i + 1) == '\0')
						 {
							 return (haystack + j);
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
	}
	return ("NULL");
}
