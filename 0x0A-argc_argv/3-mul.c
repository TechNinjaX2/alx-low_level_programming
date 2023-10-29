#include <stdio.h>

/**
 * main - prints result of multiplied arguments
 * @argc: number of elements
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, a, b, r;

	i = 1;
	if (argc > 2)
	{
		a = *argv[i] - 48;
		b = *argv[i + 1] - 48;
		r = a * b;
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
