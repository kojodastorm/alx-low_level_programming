#include "main.h"
/**
 *_isalpha - determins if the character is a letter
 *@c: contains the integer decimal
 *Return: int (Success)
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 97 + 26) || (c > 64 && c < 65 + 26))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
