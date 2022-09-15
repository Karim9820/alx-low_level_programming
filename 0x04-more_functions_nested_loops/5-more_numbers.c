#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int i, j, a, b;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				a = j;
			}
			else
			{
				b = j / 10;
				a = j % 10;
				_putchar(b + '0');
			}
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}
