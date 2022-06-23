#include "main.h"

/**
 * cap_string - changes to uppercase each word
 * @s: contains the destination pointer
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i, j, n;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')','{', '}'};

	n = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (*(s + i - 1) == sep[j])
				{
					n = 1;
				}
			}

			if (n == 1)
			{
				*(s + i) -= -('A' - 'a');
			}
			n = 0;
		}
	}
	return (s);
}
