#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - joins strings
 * @dest: destination
 * @str: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, dest_len = 0;

    while (dest[dest_len])
        dest_len++;

    while (src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return dest;
}