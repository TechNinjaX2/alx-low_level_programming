#include <stdio.h>
#include <string.h>

/**
 * _strlen - counts length of strings
 *
 * Return: str
 */
int _strlen(char *s)
{
	char *str = "My first strlen!";
	*s = strlen(str);
	return (0);
}
