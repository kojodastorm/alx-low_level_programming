#include "main.h"

/**
 * print_number - print from any multi digit number
 *@n: number to print
 * Return: void
 */

void print_number(int n)
{
	int i = 1;
	int j;
	int state;
	int tmp;

	if (n < 0)
	{
		n *= -1;
		state = 45;
	}
	tmp = n;
	while (1)
	{
		tmp /= 10;
		if (tmp == 0)
		{
			break;
		}
		i++;
	}
	tmp = i;
	i = 1;
	for (j = 1; j < tmp; j++)
	{
		i *= 10;
	}
	while (i > 1)
	{
		if (state == 45)
		{
			_putchar('-');
			state = 0;
		}
		_putchar(n / i + 48);
		n %= i;
		i /= 10;
	}
}
