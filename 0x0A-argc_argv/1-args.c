#include <stdio.h>

/**
 * main - counts number of arguments
 * @argc: number of elements
 * @argv: the string array
 * Return: i
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
