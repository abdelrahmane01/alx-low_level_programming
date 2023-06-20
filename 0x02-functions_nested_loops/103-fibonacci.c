#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the sum of even fibonacci terms
 * not exceed 4 million
 *      by a newline
 *
 * Return: 0 (success)
*/

int main(void)
{
	unsigned long a = 0, b = 1, c, s = 0;

	while (1)
	{
		c = a + b;
		if (c > 4000000)
			break;
		if ((c % 2) == 0)
			s += c;
		a = b;
		b = c;
	}
	printf("%lu", s);

	return (0);
}
