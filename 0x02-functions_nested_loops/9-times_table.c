#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: void (Success)
 */
void times_table(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b > 0)
			{
				_putchar(',  ');
			}
			_putchar(a * b + 48);
		}
		_putchar('\n')
	}
}
