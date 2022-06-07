#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;
	while (i < 97 + 26)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
