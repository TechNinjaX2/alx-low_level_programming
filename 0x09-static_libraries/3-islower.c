#include "main.h"
#include <stdio.h>

int _islower(int c)
{
        /*a = 'H';
        b = 'o';
        d = 108;
        for (c = 'a'; c <= 'z'; c++)
        {
                if (a == c)
                {
                        putchar('0');
                }
                else
                {
                        putchar('1');
                }
        }
        for (c = 'a'; c <= 'z'; c++)
        {
                if (b == c)
                {
                        putchar('1');
                }
                else
                {
                        putchar('0');
                }
        }
        for (c = 'a'; c <= 'z'; c++)
        {
                if (d == c)
                {
                        putchar('1');
                }
                else
                {
                        putchar('0');
                }
        }*/
        /*a = 'a';
        for (;a <= 'z'; a++)
        {
                if (c == a)
                {
                        return(1);
                }
                return(0);
        }*/
        if (c >= 97 && c<= 122)
        {
                return (1);
        }
        return (0);
}
