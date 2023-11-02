#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 positive integers
 * @argc: number of elements
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	char *s/*malloc(sizeof(char) * 6)*/;
	int i, a, b;

	s = "Error";
	if (argc != 3)
	{
		/*putchar(*s);
		putchar('\n');*/
		printf("%s\n", s);
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	i = a * b;
	/*c = atoi(i);
	i = *argv[1] * *argv[2];
	putchar(i);*/
	printf("%d\n", i);
	return (0);
}
