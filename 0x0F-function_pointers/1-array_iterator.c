#include <stdio.h>

/**
 * array_iterator - calls a function to print elements of a n array
 * @array: the array
 * @size: size of the array
 * @action: function to be called
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
