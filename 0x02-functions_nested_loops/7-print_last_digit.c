#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - prints the last digit of the number
 *@n: contains the integer decimal
 *Return: int (Success)
 */
int print_last_digit(int n)
{
	if (n < -10000)
	{
		n -= 1000;
	}
	if (n < 0)
	{
		n *= -1;
	}
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
