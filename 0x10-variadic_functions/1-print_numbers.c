#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, a = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			a = va_arg(arg, int);
			if (i < n - 1)
			/*Checks if i is the last function*/
			{
				printf("%d%s", a, separator);
			}
			else
			{
				printf("%d", a);
			}
		}
		else
		{
			a = va_arg(arg, int);
			printf("%d", a);
		}
	}
	putchar('\n');
}
