#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts number of elements
 * @h: a struct
 * Return: i(number of elements)
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	size_t i = 0;

	i = element_number(h, n);
	return (i);
}
/**
 * element_number - counts number of elements
 * @h: a struct
 * @n: number of elements
 * Return: n
 */
size_t element_number(const list_t *h, size_t n)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (element_number(h->next, n + 1));
		}
		return (element_number(h->next, n + 1));
	}
	return (n);
}
