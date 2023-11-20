#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		n++;
		h->next = h->next;
	}
	return n;
}
