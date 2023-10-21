#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: i
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
