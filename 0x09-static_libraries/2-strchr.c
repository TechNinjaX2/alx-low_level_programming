#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c)
{
        char *p;
        int i;

        for (i = 0; s[i] == c; i++)
        {
                p = &s[i];
                if (s[i] == '\0')
                {
                        p = &s[i];
                }
        }
        return (p);
}
