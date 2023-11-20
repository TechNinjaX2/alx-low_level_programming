#include <stdio.h>
#include "lists.h"

size_t element_number(const list_t *h, size_t n)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
			return (element_number(h->next, n + 1));
		}
		printf("[%d]%s\n", h->len, h->str);
		return element_number(h->next, n + 1);
	}
	return n;
}

size_t print_list(const list_t *h)
{
	size_t n = 0;
	size_t i = 0;
        i = element_number(h, n);
        return i;
}
