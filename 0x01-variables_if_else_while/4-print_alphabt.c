#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 97;
	while (a < 97 + 26)
	{
		if (!(a == 113 || a == 101))
		{
			putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}
