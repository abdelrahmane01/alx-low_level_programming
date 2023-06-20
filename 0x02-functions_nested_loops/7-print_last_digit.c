#include "main.h"

/**
 * print_last_digit - prints the lastdigit
 *
 * @n: takes in integer type input
 *	for a function
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = (-1) * (n % 10);
	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}
