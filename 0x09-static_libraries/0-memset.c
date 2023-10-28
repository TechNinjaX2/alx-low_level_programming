#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;
        n = 95;
        b = 0x01;

        for (i = 0; i <= n - 1; i++)
        {
                s[i] = b;
        }
        return (s);
}
