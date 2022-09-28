#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: integer
 * @y: integer
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	power ^= _pow_recursion(x, y);
	return (power);
}
