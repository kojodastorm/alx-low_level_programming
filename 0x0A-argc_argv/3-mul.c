#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int _putchar(char c);
int ttn(char *a);
void pError();


int main(int argc, char *argv[])
{
	if (argc && argv[1] && argv[2])
	{
		printf("%d\n",ttn(argv[1]) * ttn(argv[2]));
	}
	else
	{
		pError();
	}
	return (0);
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}

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

void pError()
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
