#include "main.h"

/**
 * _memcpy - copys arrays
 * @dest: string
 * @src: source
 * @n: number of elements
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
