#include "main.h"

/**
 * rot13 - rotate by 13 characters a sting letter
 * @s: contains the destination pointer
 *
 * Return: char pointer
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'A' &&  *(s + i) <= 'Z')
		{
			*(s + i) =  ((*(s + i) - 'A' + 13) % 26) + 'A';
		}
		else if (*(s + i) >= 'a' &&  *(s + i) <= 'z')
		{
			*(s + i) =  ((*(s + i) - 'a' + 13) % 26) + 'a';
		}
	}

	return (s);
}
