#include "main.h"

/**
 * _isdigit - chaecks whether c is a digit
 * @c: ascii value of c
 * 48-57: 0-9
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
