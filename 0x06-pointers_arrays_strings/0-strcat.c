#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: contains the destination string
 * @src: contains the source strings
 *
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		continue;
	}
	n = i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + n) = *(src + i);
		n++;
	}

	return (dest);
}
