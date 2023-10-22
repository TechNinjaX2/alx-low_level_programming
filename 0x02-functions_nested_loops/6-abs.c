#include "main.h"
#include <stdio.h>

/**
 * abs_val - compares numbers
 * @num: numbers
 * Return: num
 */
int _abs(int i)
{
	if (i < 0)
	{
		i -= i;
	}
	return (i);
}
