#include "main.h"

/**
 * *_strcpy - this will copy a string
 * @src: points to the address of a source string passed to it.
 * @dest: points to where the string will be coppied to
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (*src == '\0')
	{
		dest = src;
	}
	else
	{
		while (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}

	return (dest);
}
