#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, e, q;
	e = 'e';
	q = 'q';

	for (a = 'a'; a >= 'z'; a++)
	{
		if (a != e && a != q)
			putchar(a);
	}
	putchar('\n');
	return (0);
}
