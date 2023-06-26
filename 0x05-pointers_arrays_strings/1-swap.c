#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: int parameter1
 * @b: int parameter2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
