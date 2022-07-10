#include "main.h"

/**
 * prime - find if the number is prime
 *
 * @i: integer
 * @n: integer
 *
 * Return: 1 for prime 0 for not
 */

int prime(int i, int n)
{
	i++;
	if (n % i == 0 || i > n / 2)
	{
		return (0);
	}
	if (i < n / 2)
	{
		return (prime(i, n));
	}
	return (1);
}

/**
 * is_prime_number - returns if a number is prime
 *
 * @n: integer
 *
 * Return: 1 for prime 0 for not
 */

int is_prime_number(int n)
{
	int i = 1;

	if (n <= 1)
	{
		return (0);
	}
	if (n > 1 && n <= 3)
	{
		return (1);
	}
	return (prime(i, n));
}
