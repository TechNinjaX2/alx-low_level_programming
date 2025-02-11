#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds nodes to the list
 * @head: a struct
 * @str: string to be added
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	while ((*head)->next != NULL)
	{
		new_node = (*head)->next;
	}
	(*head) = new_node;
	return (new_node);
}
