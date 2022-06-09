#include "main.h"

/**
 * _isdigit - Checks if the variable is a digit
 *
 * @c: decimal integer
 *
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= '0' & c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

