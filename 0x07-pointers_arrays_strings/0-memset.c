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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
