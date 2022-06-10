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
	unsigned long int i = 2;
	unsigned long int num;
	unsigned long int a;

	a = 612852475143;
	if (prime(a))
	{
		return (0);
	}
	while (i <= a / 2)
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
	unsigned long int i;

	if (a > 3)
	{
		for (i = 2; i <= a / 2; i++)
		{
			if  (a % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
	else if (a == 2 || a == 3)
	{
		return (1);
	}
	return(0);
}
