#include "main.h"

/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 4)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}
