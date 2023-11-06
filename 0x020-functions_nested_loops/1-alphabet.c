#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}
