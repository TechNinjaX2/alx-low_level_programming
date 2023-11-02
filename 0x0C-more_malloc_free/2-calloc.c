#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: * the size of memory allocated
 * @size: size to be allocated
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
