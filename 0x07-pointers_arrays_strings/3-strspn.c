#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: memory segment
 * @accept: memory segment
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				a++;
			}
		}
		if (s[i] != accept[j])
		{
			;
		}
	}
	return (a);
}
