#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *	ten times
 *	using _putchar function
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + 48);
		_putchar('\n');
	}
}
