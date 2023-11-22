#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the struct list
 * @index: the index of the node to be deleted
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node = *head;
	unsigned int i;
	listint_t *tail = *head;

	for (i = 0; i < index; i++)
	{
		if (i == 0)
		{
			*head = (*head)->next;
		}
		else
		{
			if (i == index - 1 && new_node)
			{
				tail->next = new_node->next;
			}
			else
			{
				tail=new_node;
				if (tail == NULL)
				{
					break;
					new_node = new_node->next;
				}
			}
		}
	}
/*		tail = tail->next;
		tail = tail;
	}
	new_node->n = NULL;
	new_node->next = tail->next;*/
	/*new_node->next = tail->n;
	new->n = n;
	new->next = tail->next;
	tail->next = new;
	tail
	tail->n = 2;
	tail->next = 3;
	idx = 2;
	tail->n= tail->next;
	tail->n = 3;*/
	return (1);
}
