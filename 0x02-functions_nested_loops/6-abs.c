#include "main.h"
/**
 *_abs - prints the absolute of the number
 *@n: contains the integer decimal
 *Return: int (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
