#include "main.h"

/**
 * _abs - function that computes
 *	the absolute value of an
 *	integer
 *
 * @n: takes in integer typr input
 *	for a function
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
