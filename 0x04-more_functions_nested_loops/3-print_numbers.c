#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0 (success)
 */

void print_numbers(void)
{
	char c;

	c = '0';

	for (c > 47 && c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
