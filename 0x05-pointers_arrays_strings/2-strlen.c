#include <stdio.h>

/**
 * _strlen - counts string length
 * @str: string to be counted
 * Return: length
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
