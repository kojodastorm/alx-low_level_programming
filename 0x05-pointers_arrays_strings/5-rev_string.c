#include "main.h"

/**
 * rev_string - this will reverse a string
 *@s: points to the address of string passed to it.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int k;
	int j = 0;
	char tmp;

	for (i = 0; *s != '\0'; i++)
	{
		s = s + 1;
	}
	i--;
	k = i;

	while (i > k / 2)
	{
		s = s - 1;
		tmp = *(s - (i - j));
		*(s - (i - j)) = *s;
		*s = tmp;
		i--;
		j++;
	}
}
