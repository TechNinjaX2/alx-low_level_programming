#include <stdio.h>

/**
 * puts_half - prints half of the string
 * @str: string to be printed
 * Return: str
 */
void puts_half(char *str)
{
	int len, half;

	len = strlen(*str);
	half = len / 2;

	while (strl[half] != '\0')
	{
		half++;
	}
	if ((len % 2 == 0))
	{
		putchar(str[half]);
	}
	else ((len % 2 == 1))
	{
		putchar(str[half - 1]);
	}
}

