#include <stdio.h>

/**
 * main - Entry Point
 * prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = '0';
	int i;

	for (i = 0, i < 10, i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
