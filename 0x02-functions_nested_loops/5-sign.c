#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for +ve & -ve numbers & 0
 * @n: number to be cheked
 * Return: -1 or 1 or 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
