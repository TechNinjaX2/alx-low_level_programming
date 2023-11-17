#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	printf("[%d]%s", h->len, h->str);
	return 0;
}
