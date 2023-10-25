#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - prints the power of a number
 * @x: the number
 * @y: the power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
