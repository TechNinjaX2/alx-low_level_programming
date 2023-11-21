#include "lists.h"

/**
 * pop_listint - deletes 1st node in the list and returns its data
 * @head: the struct list
 * Return: the deleted nodes data
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	*head = (*head)->next;
	return (n);
}
