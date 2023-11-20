#include <stdio.h>
#include "lists.h"

/**
 * element_number - counts the number of elements
 * @h: struct for the elements
 * @n: number of elements
 * Return: n
 */
size_t element_number(const list_t *h, size_t n)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (element_number(h->next, n + 1));
		}
		printf("[%d] %s\n", h->len, h->str);
		return (element_number(h->next, n + 1));
	}
	return (n);
}
/**
 * print_list - prints the elements and returns the number
 * @h: the struct
 * Return: i(number of elements)
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	size_t i = 0;

	i = element_number(h, n);
	return (i);
}
