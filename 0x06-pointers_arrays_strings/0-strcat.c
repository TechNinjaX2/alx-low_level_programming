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

    /* Find the length of the destination string*/
    while (dest[dest_len])
        dest_len++;

    /* Append the source string to the destination string*/
    while (src[index])
    {
        dest[dest_len + index] = src[index];
        index++;
    }

    /* Null terminate the destination string*/
    dest[dest_len + index] = '\0';

    return dest;
}