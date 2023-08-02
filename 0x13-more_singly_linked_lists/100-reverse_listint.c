#include "lists.h"

/**
 * reverse_listint - reverse alist
 * @head: first node pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *new;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	new = NULL;
	old = (*head)->next;

	while (old)
	{
		(*head)->next = new;
		new = *head;
		*head = old;
		old = old->next;
	}
	(*head)->next = new;
	return (*head);
}
