#include "lists.h"

/**
 * pop_listint - deletes the head note
 * @head - list head
 * Return: deleted note value
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
