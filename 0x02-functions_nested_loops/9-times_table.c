#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * n - number
 * multi - multiplier
 * prod - product of number and multiplier
 * Return: 0
 */
void times_table(void)
{
	int n, multi, prod;

	for (n = 0; n <= 9; n++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			prod = n * multi;

			if (prod <= 9)
			{
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

