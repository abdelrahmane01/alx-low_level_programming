#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabets 10 times
*/

void print_alphabet_x10(void)
{
	int ch, x;

	for (x = 0; x < 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
