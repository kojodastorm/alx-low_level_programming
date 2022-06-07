#include "main.h"
/**
 *print_alphabet - loops through all the alphabets
 *
 *Return: void (Success)
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
