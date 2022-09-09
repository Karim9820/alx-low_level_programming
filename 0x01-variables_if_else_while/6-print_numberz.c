#include <stdio.h>

/**
 * main - Entry Point
 * print single digit numbers without using char
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
