#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocates memory to a concatenated string of which s2 is concatenated up to a specified number
 * @s1: string 1
 * @s2: string 2
 * @n: limit to s2's combination
 * Return: s
 */
char *_string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, k, j = 0;
	char *a, *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (; j != n; j++)
	{
		a[i] = s2[j];
		i++;
	}
	s = malloc(*a);
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; a[k] != '\0'; k++)
	{
		s[k] = a[k];
	}
	return (s);
}
