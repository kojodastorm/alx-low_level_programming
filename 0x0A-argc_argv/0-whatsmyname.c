#include <stdio.h>

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
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
