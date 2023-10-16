#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: str
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
