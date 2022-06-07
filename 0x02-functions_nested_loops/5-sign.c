#include "main.h"
/**
 *print_sign - prints the sign of the input
 *@n: contains the integer decimal
 *Return: int (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45)
		return (-1);
	}
	else
	{
		return (0);
	}
}
