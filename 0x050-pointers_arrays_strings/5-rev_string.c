#include <stdio.h>

void rev_string(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	putchar(s[i]);
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	}
}
