#include "main.h"

/**
 * _memset - resets array memory
 * @s: string
 * @b: array element
 * @n: array size
 * return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
