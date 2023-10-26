#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - searches for a palindrome
 * @s: the string
 * Return: r
 */
int is_palindrome(char *s)
{
	int r, j;

	j = 1;
	r = palindrome(s, j);
	return (r);
}
/**
 * palindrome - checks if a string is a palindrome
 * @z: the string
 * @k: the string element in reverse
 * Return: 1 or 0
 */
int palindrome(char *z, int k)
{
	int i, r;

	r = strlen(z);
	i = r - k;
	if (*z == z[i])
	{
		if (*z == '\0')
		{
			return (1);
		}
		else
		{
			return (palindrome(z + 1, k + 1));
		}
	}
	else
	{
		return (0);
	}
}
