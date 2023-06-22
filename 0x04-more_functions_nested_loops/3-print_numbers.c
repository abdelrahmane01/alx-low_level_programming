#include "main.h"

/**
 * print_numbers - prints 0 - 9
 *	using _putchar function
 *
 * Return: always 0 (success)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
