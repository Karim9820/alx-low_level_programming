#include "3-calc.h"

/**
 *op_add - function to add
 *@a: value
 *@b: value
 *Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function to subtract
 *@a: value
 *@b: value
 *Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function to multiply
 *@a: value
 *@b: value
 *Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function to divide
 *@a: value
 *@b: value
 *Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Undefined\n");
		exit(0);
	}
	return (a / b);
}

/**
 *op_mod - function to get modulus
 *@a: value
 *@b: value
 *Return: modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Undefined\n");
		exit(0);
	}
	return (a % b);
}
