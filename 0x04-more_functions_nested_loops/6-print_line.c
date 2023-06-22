#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: is number of times the _ character
 *	should be printed
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
