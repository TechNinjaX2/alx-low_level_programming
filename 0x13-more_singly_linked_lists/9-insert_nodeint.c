#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the struct list
 * @idx: index where new_node is to be added
 * @n: the new_node->n to be added
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	new_node->n = n;
	for (i = 1; i < idx; i++)
	{
		tail = tail->next;
		tail = tail;
	}
	new_node->next = tail->next;
	tail->next = new_node;
	return (new_node);
}
