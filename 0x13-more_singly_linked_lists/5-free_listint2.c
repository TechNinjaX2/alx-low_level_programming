#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: the struct list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *end;

	while (*head != NULL)
	{
		end = *head;
		*head = (*head)->next;
		free(end);
	}
	*head = NULL;
}
