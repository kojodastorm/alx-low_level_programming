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
	char sep[11] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char se2[3] = {' ', '\t', '\n'};

	n = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			for (j = 0; j < 12; j++)
			{
				if (*(s + i - 1) == sep[j])
				{
					n = 1;
				}
			}
			for (j = 0; j < 3; j++)
			{
				if (*(s + i - 1) == se2[j])
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
