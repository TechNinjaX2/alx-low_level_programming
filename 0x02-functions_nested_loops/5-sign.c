#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks for +ve & -ve numbers & 0
 * @n: number to be cheked
 * Return: + or - or 0
 */
int print_sign(int n)
{
	if (n < '0')
	{
		putchar('-');
	}
	return (-1);
	if (n > '0')
	{
		putchar('+');
	}
	return (1);
	if (n == '0')
	{
		putchar('0');
	}
	return (0);
}
