#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string parameter input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (; s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
