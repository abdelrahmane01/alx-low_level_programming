#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse
 *
 * @s: pointer to a string to print
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	while (x)
	{
		s--;
		_putchar(*s + 0);
		x--;
	}
}
