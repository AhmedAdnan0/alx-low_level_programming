#include "lists.h"

/**
 * free_listint - free linked list
 * @head: linked list head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		while (head->next)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
	free(head);
}
