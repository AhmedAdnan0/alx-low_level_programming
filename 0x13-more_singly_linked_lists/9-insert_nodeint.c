#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list head
 * @idx: new node index
 * @n: new node value
 * Return: the new node address
 *         NULL if falied
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int i;

	ptr = *head;

	if (idx)
	{
		for (i = 0; i < idx - 1; ++i)
		{
			if (ptr->next == NULL)
				return (NULL);

			ptr = ptr->next;
		}
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
	}
	else
	{
		temp->next = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
