#include "main.h"

/**
 * is_palindrome - find if the string is palindrome
 *
 * @s: string pointer
 *
 * Return: 1 for palindrome 0 for not
 */

int _count(char *s)
{
	int a;

	if (*s != '\0')
	{
		s++;
		a = _count(s);
		return (1 + a);
	}
	return (0);
}

int _strcmp(char *s, int n, int half)
{
	int a = 1;
	if (*s == *(s + n - 1) && half > 0)
	{
		n--;
		a = _strcmp(++s, --n, --half);
	}
	else if (half > 0)
	{
		return (0);
	}
	if (a == 0)
	{
		return (0);
	}
	return (1);
}
				

int is_palindrome(char *s)
{
	int n;
	
	n = _count(s);

	return (_strcmp(s, n, n / 2));
}
