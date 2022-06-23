#include "main.h"

/**
 * string_toupper - changes to uppercase
 * @*: contains the destination pointer
 * 
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if(*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= -('A' - 'a');
		}
	}
	return (s);
}
