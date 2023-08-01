#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: list head
 * @index: new node index
 * Return:  1 (Success)
 *         -1 (Failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	prev = *head;
	current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
		*head = (*head)->next;

	for (i = 0; i < index; ++i)
	{
		if (i > 1)
			prev = prev->next;
		current = prev->next;
		if (current == NULL)
			return (-1);
	}

	prev->next = current->next;
	free(current);
	current = NULL;

	return (1);
}
