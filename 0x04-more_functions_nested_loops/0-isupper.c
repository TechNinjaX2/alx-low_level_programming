#include "main.h"

/**
 * _isupper - checks whether "c" is uppercase
 * @c: the ascii value of the character
 * 97-122: a-z 65-90: A-Z
 * Return: 0 if lowercase 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
