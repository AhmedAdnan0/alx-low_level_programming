#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: list head
 * @index: index of the node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n < index; ++n)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
