#include <stdarg.h>
#include <stdio.h>

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
	const char *a;

	va_start(string, n);
	for (i = 0; i < n; ++i)
	{
		if (separator != NULL)
		{
			a = va_arg(string, const char *);
			if (i < n - 1)
			{
				printf("%s%s", a, separator);
			}
			else
			{
				printf("%s", a);
			}
		}
		else
		{
			a = va_arg(string, const char *);
			printf("%s", a);
		}
	}
	va_end(string);
	putchar('\n');
}
