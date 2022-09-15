#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: 1 (success)
 * Return: 0 (failure)
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
