#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");		}

		i++;
	}
	printf("\n");
	return (0);
}
