#include <stdio.h>

/**
 * string_toupper - capitalizes elements
 * @str: string
 * Return: str
*/
char *string_toupper(char *str)
{
        int i = 0;

        while (str[i])
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                        str[i] -= 32;
                }
                i++;
        }
        return (str);
}