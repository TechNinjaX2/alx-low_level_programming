#include "main.h"

/**
 * leet - replaces
 * @s: string
 * Return: s
*/
char *leet(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
                if (s[i] ==  'a')
                {
                        s[i] = 4;
                }
                if (s[i] == 'A')
                {
                        s[i] = 4;
                }
                if (s[i] == 'e')
                {
                        s[i] = 3;
                }
                if (s[i] == 'E')
                {
                        s[i] = 3;
                }
                if (s[i] == 'o')
                {
                        s[i] = 0;
                }
                if (s[i] == 'O')
                {
                        s[i] = 0;
                }
                if (s[i] == 't')
                {
                        s[i] = 7;
                }
                if (s[i] == 'T')
                {
                        s[i] = 7;
                }
                if (s[i] == 'l')
                {
                        s[i] = 1;
                }
                if (s[i] == 'L')
                {
                        s[i] = 1;
                }
                else
                {
                        s[i] = s[10];
                }
        }
        return (s);
}