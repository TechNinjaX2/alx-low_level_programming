#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (struct list_s)malloc(sizeof(list_t));

	new_node->str = str;
	new_node->len = strlen(str);
	new_node->next = (*head);
	return new_node;
}
