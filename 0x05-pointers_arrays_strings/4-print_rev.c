#include <stdio.h>

/**
 * print_rev - prints in reverse
 * @*s: string to be printed
 * Return: reverse of *s
 */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
