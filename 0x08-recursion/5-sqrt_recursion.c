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
	int sq = 2;

	printf("%d ", sq);

	printf("%d ", _pow_recursion(sq, 2));
	if (n == _pow_recursion(sq, 2))
	{
		return (sq);
	}
	if (sq > n / 2 || _pow_recursion(sq, 2) > n)
	{
		return (-1);
	}
	if (_pow_recursion(sq, 2) < n)
	{
		sq++;
		return (_sqrt_recursion(sq));
	}
	return (0);
}
