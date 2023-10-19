#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: destination
 * @src: source
 * Return: str
 */
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
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
	putchar (dest);
	return;
}
