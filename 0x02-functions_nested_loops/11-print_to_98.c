#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n : integer
 * Return: 0
 */
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
