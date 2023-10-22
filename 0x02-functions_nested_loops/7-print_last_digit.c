#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @i: numbers
 * Return: r
 */
int print_last_digit(int i)
{
	int r, k;

	if (i < 0)
	{
		i = -i;
	}
	r = i % 10;
	k = r * 11;
	return (k);
}
