#include <stdio.h>

/**
 * main - Entry Point
 * prints the alphabet, in lowercase, followed by a new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
