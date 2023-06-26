#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int x, y, z;

	for (x = 0; s[x] != '\0'; x++)
	;
	for (y = 0; y < x / 2; y++)
	{
		z = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = z;
	}
}
