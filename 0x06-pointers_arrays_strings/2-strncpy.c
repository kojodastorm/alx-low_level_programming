#include "main.h"

/**
 * _strncpy - concatenates 2 strings
 * @dest: contains the destination string
 * @src: contains the source strings
 * @n: number of strings
 *
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
