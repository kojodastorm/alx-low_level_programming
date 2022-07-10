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
/**
 * _sqrt_recursion - outputs power
 *
 * @n: integer
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (recursion(1, n));
}

/**
 * recursion - outputs square root
 *
 * @n: integer
 * @a: starting point
 *
 * Return: int
 */

int recursion(int a, int n)
{
	if (n == _pow_recursion(a, 2))
	{
		return (a);
	}
	if (a > n / 2 || _pow_recursion(a, 2) > n)
	{
		return (-1);
	}
	return (recursion(++a, n));
}
