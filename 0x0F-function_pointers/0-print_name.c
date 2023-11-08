#include <stdio.h>

/**
 * print_name - calls other functions
 * @name: the name to be printed
 * @f: the function to be called
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
