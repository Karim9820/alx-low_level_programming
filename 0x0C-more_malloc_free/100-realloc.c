#include "main.h"

/**
 *_realloc - reallocates memory block
 *@ptr: pointer to previous memory
 *@old_size: previous memory size
 *@new_size: new block size
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *a = ptr;
	unsigned int i, n = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = a[i];
	free(ptr);
	return (p);
}
