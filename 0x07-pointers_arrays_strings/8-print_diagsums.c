#include "main.h"

/**
 * print_diagsums - prints the diagonal sums
 * @a: array
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, lsum, rsum;

	lsum = 0;
	rsum = 0;
	j = size - 1;

	for (i = 0; i < size; i++)
	{
		lsum += *(a + i * size + i);
		rsum += *(a + i * size + j--);
	}
	printf("%d, %d\n", lsum, rsum);
}
