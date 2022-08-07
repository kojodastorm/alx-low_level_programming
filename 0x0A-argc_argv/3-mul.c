#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc && argv[1] && argv[2])
	{
		printf("%d\n", ttn(argv[1]) * ttn(argv[2]));
	}
	else
	{
		pError();
	}
	return (0);
}

/**
 * _putchar - prints the name of the program
 *
 * @c: argument count
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * ttn - prints the name of the program
 *
 * @a: argument count
 *
 * Return: int
 */
int ttn(char *a)
{
	int b = 0;
	int count = 1;
	int i;
	int sign = 1;

	if (*a == '-')
	{
		a += 1;
		sign = -1;
	}

	for (i = 0; *(a + i) != '\0'; i++)
	{
		count *= 10;
	}
	count /= 10;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		b += count * (*(a + i) - '0');
		count /= 10;
	}
	return (b * sign);
}

/**
 * pError - prints the name of the program
 *
 * Return: void
 */
void pError(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
