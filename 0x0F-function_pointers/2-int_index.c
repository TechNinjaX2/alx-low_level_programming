#include <stdio.h>

/**
 * int_index - calls a function to searche for an integer
 * @array: the array which is being searched
 * @size: the size of the array
 * @cmp: the function to be called
 * Return: 2 or -1 or 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (size <= 0)
	{
		return (-1);
	}
	if (array[i] == '\0')
	{
		while (i < size)
		{
			j = cmp(array[i]);
			if (j == 1)
			{
				return (i);
			}
			else
			{
				i++;
			}
		}
	}
	return (-1);
}
