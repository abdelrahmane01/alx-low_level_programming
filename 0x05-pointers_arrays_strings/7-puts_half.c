#include "main.h"

/**
 * puts_half -   a function that prints half of a string,
 * followed by a new line.
 *
 * @str: char array string type
 *
 * Description: If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;

	x++;
	for (x = x / 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
