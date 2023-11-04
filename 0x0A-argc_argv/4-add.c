#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	printf("%d\n", a);
	return (0);
}
