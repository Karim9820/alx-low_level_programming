#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: 1 (success) else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
