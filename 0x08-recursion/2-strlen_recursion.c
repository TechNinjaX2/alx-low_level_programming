#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - counts elements in a string
 * @s: the string
 * Return: number of elements
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
