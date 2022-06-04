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
		if (a < 48 + 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
