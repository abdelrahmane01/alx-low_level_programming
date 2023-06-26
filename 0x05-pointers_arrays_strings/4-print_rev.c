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

	while (*str != '\0')
	{
		x++;
		str++;
	}
	while (x)
	{
		_putchar(*s + 0);
		x--;
	}
	_putchar('\n');
}
