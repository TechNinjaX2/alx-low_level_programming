#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = ("%d%10",n);
	for (;n>5;)
		printf("Last digit of %d is %d and is greater than 5\n",n,z)
	return (0);
}
