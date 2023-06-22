#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *      ten times
 *      using _putchar function
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int i, k, z;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			z = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				z = i % 10;
			}
			_putchar(z + 48);
		}
		_putchar('\n');
	}
}
