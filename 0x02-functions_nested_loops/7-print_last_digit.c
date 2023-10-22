#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @i: numbers
 * Return: r
 */
int print_last_digit(int i)
{
	int r;

	if (i < 0)
	{
		i = -i;
	}
	else
	{
		r = i % 10;
	}
	return (r);
}
