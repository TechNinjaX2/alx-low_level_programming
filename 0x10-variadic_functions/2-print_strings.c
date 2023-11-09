#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	int b;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		b = va_arg(string, int);
		printf("%d%s", b, separator);
	}
	va_end(string);
	putchar('\n');
}
