#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints result of multiplied arguments
 * @argc: number of elements
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc > 2)
	{
		a = atoi(argv[1]);
        	b = atoi(argv[2]);
        	r = a * b;
		putchar(r);
	}
	else
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (1);
	}
	return (0);
}
