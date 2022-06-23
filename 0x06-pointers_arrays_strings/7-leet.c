#include "main.h"

/**
 * leet - a function to encode caracters
 * @s: contains the destination pointer
 *
 * Return: char
 */

char *leet(char *s)
{
	char c[20] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1', 'A',
		'4', 'E', '3', 'O', '0', 'T', '7', 'L', '1'};
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (*(s + i) == c[j] && !(*(s + i) > '0' && *(s + i) < '9'))
			{
				*(s + i) = c[j + 1];
				break;
			}
		}
	}

	return (s);
}
