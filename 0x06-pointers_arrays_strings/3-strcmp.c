include "main.h"

/**
 *_strcmp - compares strings
 *@s1: string
 *@s2: string
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	char *i;
	char *j;

	i = s2;
	j = s1;

	while (*s1 != '\0' && *s2 != '\0' && *j == *i)
	{
		j++;
		i++;
	}
	return (*j - *i);
}
