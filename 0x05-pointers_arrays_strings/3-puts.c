#include <stdio.h>

/**
 * _puts - prints a string
 *
 * Return: str
 */
void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
