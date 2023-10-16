#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @*str: string to be printed
 * Return: Always 0.
 */
void print_rev(char *str)
{
	for (; *str != '\0'; --*str)
	{
		putchar(*str);
	}
	putchar('\n');
}
