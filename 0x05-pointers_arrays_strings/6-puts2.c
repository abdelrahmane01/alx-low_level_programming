#include "main.h"

/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0'; str++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
