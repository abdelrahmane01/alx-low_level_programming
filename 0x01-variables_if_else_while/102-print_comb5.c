#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different of combinations of two digits.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit1 = 0, digit2, digit3, digit4;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 8)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				digit4 = 0;
				while (digit4 <= 9)
				{
					if (digit1 == digit3 && digit2 == digit4)
                    {
                        digit4++;
                        continue;
					}
					if (((digit1 * 10) + digit2) >= ((digit3 * 10) + digit4))
                    {
                        digit4++;
                        continue;
					}
					putchar(digit1 + 48);
					putchar(digit2 + 48);
					putchar(' ');
					putchar(digit3 + 48);
					putchar(digit4 + 48);

					digit4++;
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
            digit2++;
        }
        digit1++;
    }
    putchar('\n');

	return (0);
}
