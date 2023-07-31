#include "lists.h"

/**
 * free_listint2 - sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head)
	{
		while ((*head)->next)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
	free(*head);
}
