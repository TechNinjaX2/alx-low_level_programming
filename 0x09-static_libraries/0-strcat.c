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
    int index = 0, dest_len = 0;

   while (dest[dest_len])
        dest_len++;

    while (src[index])
    {
        dest[dest_len + index] = src[index];
        index++;
    }

    dest[dest_len + index] = '\0';

    return dest;
}
