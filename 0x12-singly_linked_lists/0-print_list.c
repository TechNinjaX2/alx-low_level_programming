#include <stdio.h>
#include "lists.h"

/*int element_number(const list_t *h, int n)
{
	while (h != NULL)
	{
		printf("[%d]%s\n", h->len, h->str);
		return element_number(h->next, n + 1);
	}
	return 0;
}

size_t print_list(const list_t *h)
{
	size_t n = 0;
        element_number(h, n);
        return n;
}*/
size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
			return (print_list(h->next));
		}
		printf("[%d]%s\n", h->len, h->str);
		return (print_list(h->next));
	}
	/*i = element_number(h, n);*/
	return 2;
}
/*size_t element_number(const list_t *h, size_t n)
{
	while (h->str != NULL)
	{
		return element_number(h->next, n + 1);
	}
	return n;
}*/
