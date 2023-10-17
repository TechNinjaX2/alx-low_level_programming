#include <stdio.h>

/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 * Return: s
 */
void rev_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
		break;
	}
	for (i -= 0; i >= 0; i--)
	{
		putchar(s[i]);
		break;
	}
	
}
