include "main.h"

/**
 *string_toupper - Change all lowercase letters to uppercase
 *@c: string
 *Return: c
 */

char *string_toupper(char *c)
{
	char *a;

	a = c;

	do {
		if (*c <= 'z' && *c >= 'a')
			*c -= 32;
	} while (*c++);
	return (c);
}
