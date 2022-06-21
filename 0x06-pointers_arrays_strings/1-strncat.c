#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: contains the destination string
 * @src: contains the source strings
 * @n: number of strings
 *
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		continue;
	}
	j = i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}

	return (dest);
}
