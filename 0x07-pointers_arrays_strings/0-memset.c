#include "main.h"
#include <stdio.h>

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
	b = 0x01;
	n = 95;
	
	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
