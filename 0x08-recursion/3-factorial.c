#include "main.h"

/**
 * factorial - outputs factorial
 *
 * @n: integer
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		while (n > 0)
		{
			n--;
			return ((n + 1) * factorial(n));
		}

	}
	return (0);
}
