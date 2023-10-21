#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	for (i = '0'; i <= '8'; i++)
	{
		for (x = i + 1; x <= '9'; x++)
		{
			if (x != i)
			{
				putchar(i);
				putchar(x);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
