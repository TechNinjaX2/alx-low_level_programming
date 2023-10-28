#include "main.h"
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
        /*char a = n;

        for (;(*dest != 50 + a); dest++)
        {
                *dest = *src;
        }
        return (dest);*/
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
