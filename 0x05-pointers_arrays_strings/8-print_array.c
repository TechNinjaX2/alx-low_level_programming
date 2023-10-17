#include <stdio.h>

/**
 * print_array - print the array
 * @a: array
 * @n: number of elements in the array
 * Return: a
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[n + 1] != '\0')
	{
		i++;
	}
	if (a[n + 1] != '\0')
	{
		putchar(a[i])
		putchar(', ');
	}
	else
	{
		putchar(a[n]);
	}
}
