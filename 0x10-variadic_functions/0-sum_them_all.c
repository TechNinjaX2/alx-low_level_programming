#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - adds the parameters given
 * @n: first parameter given
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(var, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(var, int);
	}
	va_end(var);
	return (sum);
}
