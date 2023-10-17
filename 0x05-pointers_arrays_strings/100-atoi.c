#include <stdio.h>

/**
 * _atoi - converts s into integer
 * @s: string
 * Return: s
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int a = 0;
	int b = 1;
	int c = 0;

	while (s[a])
	{
		if (s[a])
		{
			b *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			i = (i * 10) + (s[c]) - '0';
			a++;
		}
		if (c == 1)
		{
			break;
		}
		c++;
	}
	i *= b;
	return (i);
}
