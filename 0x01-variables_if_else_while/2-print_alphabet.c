#include <stdio.h>

/**
 * main - Entry Point
 * prints the alphabet in lowercase, followed by a new line
 * Return 0 (success)
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

