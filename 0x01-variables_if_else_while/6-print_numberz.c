#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		/*convert digit to ASCII */
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
