#include "lists.h"

/**
 * add_nodeint - add node to a linked list
 * @head: linked list head
 * @n: intiger value
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
