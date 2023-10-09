#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	for (; z > 5;)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, z);
		break;
	}
	for (; z == 0;)
	{
		printf("Last digit of %d is %d and is 0\n", n, z);
		break;
	}
	for (; z < 0;)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
		break;
	}
	return (0);
}
