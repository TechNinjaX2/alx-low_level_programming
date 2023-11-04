#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add up the arguments given
 * @argc: number of elements
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, a;

	for (i = 1; i == argc; i++)
	{
		a = atoi(argv[i]);
		printf("%d\n", a);
	}
	return (0);
}
