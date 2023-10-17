#include <stdio.h>

/**
 * puts2 - print even variables
 * @s: string to be printed
 * Return: s
 */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if ((i % 2) != 0)
	{
		i++;
	}
	else
		putchar(s[i]);
	}
