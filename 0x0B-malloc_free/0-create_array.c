#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocates a memory space for an array through malloc
 * @size: size of the memory allocation
 * @c: character in the array
 * Return: s
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
