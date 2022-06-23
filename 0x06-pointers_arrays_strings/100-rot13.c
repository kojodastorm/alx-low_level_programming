#include "main.h"

/**
 * rot13 - rotate by 13 characters a sting letter
 * @s: contains the destination pointer
 *
 * Return: char pointer
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}
