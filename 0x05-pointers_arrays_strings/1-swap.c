#include <stdio.h>

/**
 * swap_int - swaps
 * @a: 1int
 * @b: 2int
 * Return: a,b
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
