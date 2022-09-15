#include <stdio.h>
#include <math.h>

/**
 * main - Entry Point
 * finds and prints the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	long num = 612852475143;

	for (a = (int) sqrt(num); a > 2; a++)
	{
		if (num % a == 0)
		{
			printf("%d\n", a);
			break;
		}
	}

	return (0);
}
