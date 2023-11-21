#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements
 * @h: a struct list
 * Return: i(number of elements)
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0, j = 0;

	i = number_of_elements(h, j);
	return (i);
}
/**
 * number_of_elements - counts the number of element
 * @h: a struct list
 * @j: number of elements
 * Return: j
 */
size_t number_of_elements(const listint_t *h, size_t j)
{
	if (h != NULL)
	{
		return (number_of_elements(h->next, j + 1));
	}
	return (j);
}
