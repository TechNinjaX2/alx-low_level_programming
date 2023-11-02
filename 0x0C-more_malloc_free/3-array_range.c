#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: s
 */
int *array_range(int min, int max)
{
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * 10);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
