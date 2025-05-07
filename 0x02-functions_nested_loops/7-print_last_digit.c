#include "main.h"
#include <stdio.h>

/**
 * print_last_digit_string - returns the last digit of a number
 * @i: the number
 * Return: r(the last digit)
 */
int print_last_digit_string(int i)
{
	int r;

/*	if (i < 0)
	{
		i = -i;
	}
*/	r = i % 10;

	return (r);
}

/**
 * print_last_digit - prints the last digit of a number as a string
 * @i: numbers
 * Return: result
 */
int print_last_digit(int i)
{
	char result;

	result = print_last_digit_string(i);
	if (result < 0)
	{
		result = -result;
	}
	_putchar('0' + result);
	return (result);
}
