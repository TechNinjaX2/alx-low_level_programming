#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum = 0, i;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		i = head->n;
		head = head->next;
		sum = sum + i;
	}
	return (sum);
}
