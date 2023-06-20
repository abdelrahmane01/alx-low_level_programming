#include "main.h"

/**
 * main - entry point
 *
 * Description: prints first 50 fibonacci numbers followed
 *	by a newline
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a = 0, b = 1, c, x;

	for (x = 0; x < 50; x++)
	{
		c = a + b;
		printf("%d", c);

		a = b;
		b = c;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
