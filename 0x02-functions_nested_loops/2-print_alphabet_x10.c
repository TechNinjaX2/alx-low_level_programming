#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return: a
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
