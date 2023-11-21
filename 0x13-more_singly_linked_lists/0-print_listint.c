#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements in a list
 * @h: a struct list
 * Return:n(number of elements)
 */
size_t print_listint(const listint_t *h)
{
	size_t i, j = 0;

	i = element_number(h, j);
	return (i);
}
/**
 * element_number - counts the nimber of elements
 * @h: a struct list
 * @j: number of elements
 * Return: number of elements
 */
size_t element_number(const listint_t *h, size_t j)
{
	while (h != NULL)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			return (j + 1);
		}
		printf("%d\n", h->n);
		return (element_number(h->next, j + 1));
	}
	return (0);
}
