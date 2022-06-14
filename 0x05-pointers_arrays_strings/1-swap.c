#include "main.h"

/**
 * swap_int - this will swap the original values passed to it
 *@a: points to the address of integer passed to it.
 *@b: points to the address of integer passed to it.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}

