#include "main.h"
/**
 *_islower - determins if the character is lower
 *@c: contains the integer decimal
 *Return: int (Success)
 */
int _islower(int c)
{
	if (c > 65 + 26)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
