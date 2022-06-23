#include "main.h"

/**
 * reverse_array - this will reverse an array supplied
 * @a: contains the destination pointer
 * @n: contains the size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;
	int j;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		j--;
	}
}
