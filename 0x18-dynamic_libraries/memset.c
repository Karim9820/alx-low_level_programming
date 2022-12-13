#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *@s: character for memory address
 *@b: character pointer
 *@n: bytes of memory
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
