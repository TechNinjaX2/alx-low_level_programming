#include <stdio.h>

/**
 * main - prints each argument in its new line
 * @argc: the number elements
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i != argc; i++)
	{
		printf("%s\n", *argv[i]);
	}
	return (0);
}
