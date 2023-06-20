#include "main.h"

/**
 * main - entry point
 *
 * Description: computes the summ of all
 * the multiples of 3 or 5
 * below 1024
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, sum = 0;

	for (n = 0; n <= 1023; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
