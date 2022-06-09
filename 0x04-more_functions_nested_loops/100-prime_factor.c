#include <stdio.h>

/**
 * main - find largest prime numbers
 *
 * @a: long int test number
 *
 * Return: int
 */

int prime(unsigned long int a);

int main(void)
{
	int i = 2;
	unsigned long int num;
	unsigned long int a;

	a = 612852475143;
	if (prime(a))
	{
		printf("%lu\n", a);
		return (0);
	}
	while (i != 0)
	{
		if (prime(i))
		{
			if (a % i == 0)
			{
				a /= i;
				num = i;
			}
			else
			{
				i++;
			}
			if (prime(a))
			{
				if (a >= num)
				{
					num = a;
					i = 0;
					break;
				}
				else
				{
					i = 0;
					break;
				}
			}
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", num);
	return (0);
}

/**
 * prime - find if the number is prime
 *
 * @a: long integer
 *
 * Return: 1 for prime 0 for not
 */

int prime(unsigned long int a)
{
	if (a > 1 && (a == 2 || a == 3 || a == 5))
	{
		return (1);
	}
	else if (a > 9)
	{
		if (a % 10 == 1 || a % 10 == 3 || a % 10 == 7 || a % 10 == 9)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
