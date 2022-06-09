#include "main.h"

/**
 * _isupper - checks if a variable is uppercase
 *
 * @c: integer to be checked
 * Return: int (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c < 65 + 26)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

