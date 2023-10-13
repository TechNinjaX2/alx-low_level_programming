#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

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
