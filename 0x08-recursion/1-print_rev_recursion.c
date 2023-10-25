#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string
 * Return: s
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
