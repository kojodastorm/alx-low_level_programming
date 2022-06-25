#include "main.h"

/**
 * _memcpy - cpied a memory area
 * @src: memory area
 * @dest: destination memory area
 * @n: amount of memory
 *
 * Return: charater pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
