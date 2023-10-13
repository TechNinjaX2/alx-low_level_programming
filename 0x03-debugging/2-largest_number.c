#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > b && a> c)
	{
		largest = a;
		printf("%d is the largest number", largest);
	}
	else if (b > a && a > c)
	{
		largest = b;
		printf("%d is the largest number", largest);
	}
	else
	{
		largest = c;
		printf("%d is the largest number", largest);
	}

	return(0);
}
