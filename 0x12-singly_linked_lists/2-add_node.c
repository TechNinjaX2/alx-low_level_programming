#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds nodes to the end of the list
 * @head: a struct
 * @str: the string to be added
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
