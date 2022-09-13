#include "main.h"

/**
 * _islower - main
 * checks for lowercase character.
 * Returns 1 if c is lowercase and returns 0 otherwise
 * @c: Character ASCII code
 * Return: 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
