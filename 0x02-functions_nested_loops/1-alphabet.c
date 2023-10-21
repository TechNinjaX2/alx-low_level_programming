#include <stdio.h>
#include "main.h"

/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
