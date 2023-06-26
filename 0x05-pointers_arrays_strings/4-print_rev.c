#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: pointer to a string to print
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	while (x)
	{
		_putchar(*s + 0);
		x--;
		s--;
	}
	_putchar('\n');
}
