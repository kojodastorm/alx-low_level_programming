#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 97 + 25;
	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
