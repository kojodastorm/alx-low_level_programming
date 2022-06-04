#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 48 + 10; a++)
	{
		putchar(a);
	}
	putchar(10);

	return (0);
}
