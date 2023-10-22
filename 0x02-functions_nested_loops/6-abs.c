#include <stdio.h>

/**
 * abs_val - compares numbers
 * @num: numbers
 * Return: num
 */
int abs_val(int num)
{
	if (num < 0)
	{
		num -= num;
	}
	return (num);
}
