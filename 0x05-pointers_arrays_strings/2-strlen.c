#include <stdio.h>

int _strlen(char *str)
{
	size_t length = 0;

	while(*str++)
		length++;
	return(length);
}
