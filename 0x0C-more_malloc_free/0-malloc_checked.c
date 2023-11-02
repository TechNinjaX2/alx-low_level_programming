#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of memory to be allocated
 * Return: s
 */
void *malloc_checked(unsigned int b)
{
	int *s, *i;

	*i = 98;
	s = malloc(sizeof(char) * 1024);
	if (s == NULL)
	{
		free(s);
		return (i);
	}
	return (s);
}
