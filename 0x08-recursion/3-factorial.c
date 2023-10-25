#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the factorial of a number
 * @n: the number
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
