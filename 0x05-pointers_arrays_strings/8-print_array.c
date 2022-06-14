#include "main.h"

/**
 * print_array - this will print an array
 * @n: number of elements
 * @a: points to the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf ("%d", *(a + i));
		}
		else
		{
			printf (", %d", *(a + i));
		}
	}
	printf ("\n");

}

