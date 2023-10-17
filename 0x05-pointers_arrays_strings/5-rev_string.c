#include "main.h"

/**
 * rev_string - print the everse of a string
 * @s: The string to be modified
 * Return: s
 */
void rev_string(char *s)
{
	char a;
	int l = 0, i = 0;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		a = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = a;
	}
}

