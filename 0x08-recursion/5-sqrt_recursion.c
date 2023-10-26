#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - prints square root
 * @n: the number
 * Return: r
 */
int _sqrt_recursion(int n)
{
	int y, r;

	y = 0;
	r = _sqrt(n, y);
	return (r);
}
/**
 * _sqrt - searches for the square root
 * @i: the number
 * @j: the square root
 * Return: j
 */
int _sqrt(int i, int j)
{
	int k;

	k = j * j;
	if (i < k)
	{
		return(-1);
	}
	if (k == i)
	{
		return j;
	}
	else
	{
		return _sqrt(i, j + 1);
	}
}
