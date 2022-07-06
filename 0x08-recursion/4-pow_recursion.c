#include "main.h"

/**
 * _pow_recursion - outputs power
 *
 * @x: integer
 * @y: integer power
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y > 0)
		{
			y--;
			return (x * _pow_recursion(x, y));
		}

	}
	return (1);
}
