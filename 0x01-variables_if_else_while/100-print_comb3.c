#include <stdio.h>

/**
 * main- Prints all posible combinations
 * of two digits.
 * Return: Always 0
 */
int main(void)
{
	int digit, digit2;

	for (digit2 = digit1 + 1; digit2 < 10; digit2++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
