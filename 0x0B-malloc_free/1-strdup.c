#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	s = malloc(strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i] == '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
