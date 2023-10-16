#include <stdio.h>

/**
 * main - change to 98
 *
 * Return: *n
 */
void reset_to_98(int *n)
{
	int i = 98;

	n = &i;
	*n = i;

	return;
}
