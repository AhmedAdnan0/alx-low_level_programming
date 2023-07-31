#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list
 * @h: linked list head
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		++n;
	}
	return (n);
}
