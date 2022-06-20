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
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
