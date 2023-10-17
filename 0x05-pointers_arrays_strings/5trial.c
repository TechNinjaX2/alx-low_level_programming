#include <stdio.h>

/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 * Return: s
 */
void rev_string(char *s)
{
	int i = 0;

	while ( s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	for (i -= 0; i >= 0; i--)
	{
		putchar(s[i]);
		break;
	}
}
