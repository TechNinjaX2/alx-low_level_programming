#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t*)malloc(sizeof(char *));
	char s = *str;

	new_node->str = s;
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	return new_node;
}
