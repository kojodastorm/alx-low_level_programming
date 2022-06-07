#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints the numbers before and after 98
 *@n: the starting number
 *
 *Return: void (Success)
 */
void print_to_98(int n)
{
	int a = 98;

	while (n != a)
	{
		printf("%d, ", n);
		if (n > a)
		{
			n--;
		}
		else if (n < a)
		{
			n++;
		}
	}
	printf("%d\n", 98);

}
