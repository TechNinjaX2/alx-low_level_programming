#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node in a linked list
 * @head: the struct list
 * @index: the node index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < index; n++)
	{
		head = head->next;
	}
	return (head);
}
