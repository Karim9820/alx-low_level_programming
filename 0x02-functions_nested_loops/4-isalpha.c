#include "main.h"

/**
 * _isalpha - main
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * @c: Character ASCII code
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
