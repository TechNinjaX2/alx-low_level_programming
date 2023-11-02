#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of memory to be allocated
 * Return: s
 */
void *malloc_checked(unsigned int b)
{
	int a = 5;
	int *s, *i = &a;

	*i = 98;
	s = malloc(b);
	if (s == NULL)
	{
		free(s);
		return (i);
	}
	return (s);
}
