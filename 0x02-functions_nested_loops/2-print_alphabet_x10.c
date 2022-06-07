#include "main.h"
/**
 *print_alphabet_x10 - loops through all the alphabets
 *10 times
 *
 *Return: void (Success)
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int a = 0;

	while (a < 10)
	{
		while (i < 97 + 26)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
	a++;
	i = 97;
	}
}
