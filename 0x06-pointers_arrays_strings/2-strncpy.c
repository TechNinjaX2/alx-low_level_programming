#include "main.h"

/**
 * _strncpy - copies a string upto a certa8n integer
 * @dest: stores the copied string
 * @src: source string
 * @n: max number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i = 0, src_len = 0, j;
        char s2[6] = "First";

        for (j = 0; j < 6; j++)
        {
                dest[j] = s2[i];
        }
        while (src[i++])
        {
                src_len++;
        }
        for (i = 0; src[i] && i < n; i++)
        {
                dest[i] = src[i];
        }
        for (i = src_len; i < n; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}