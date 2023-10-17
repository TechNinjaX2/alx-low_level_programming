#include <stdio.h>

/**
 * puts_half - prints half the string
 * @str: string to be printed
 * Return: str
 */
void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 3)
	{
		x = (i - 1) / 2;
		x += 1;
	}
	else
	{
		x = i / 2;
	}
	for (; x < i; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
