#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add - adds up all numbers given
 * @v: the array of numbers
 * @i: the number of each element
 * @c: total number of arguments in the array
 */
int add(char *v[], int i, int c)
{
	int a;

	if (i == c)
	{
		return (0);
	}
	a = atoi(v[i]);
	return (a + add(v, i + 1, c));
}
/**
 * main - add up the arguments given
 * @argc: number of elements
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, a;

	i = 1;
	a = add(argv, i, argc);
	if (a == 0)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", a);
	return (0);
}
