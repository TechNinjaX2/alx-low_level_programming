#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _islower - check for lowcase alphabets
 * @c: alphabets to be checked
 * Return: 1 0r 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
