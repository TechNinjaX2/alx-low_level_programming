#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates to strings and allocates a memory
 * @s1: string 1
 * @s2: string 2
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s;

	s = malloc(sizeof(char)- 2);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
