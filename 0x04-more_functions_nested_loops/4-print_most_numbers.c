#include "main.h"

/**
 * print_most_numbers - prints the numbers except 2 and 4
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
