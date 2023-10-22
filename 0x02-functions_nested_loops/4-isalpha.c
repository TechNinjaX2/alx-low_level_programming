#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabets
 * @c: characters
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c<= 122))
	{
		return (1);
	}
	return (0);
}
