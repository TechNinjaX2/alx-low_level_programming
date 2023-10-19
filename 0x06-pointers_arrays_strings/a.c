#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: destination
 * @src: source
 * Return: str
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	j = 0;
	src = strlen(s1);

	while ( s2[j] != '\0')
	{
		s1[src - 1 + j] = s2[j];
		j++;
		dest = s1[src - 1 + j];
	}
	putchar(dest);
}
