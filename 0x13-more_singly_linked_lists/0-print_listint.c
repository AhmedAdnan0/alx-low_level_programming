#include "lists.h"

/**
 * print_listint - prints elements of linked list
 * @h: linked list head
 * Return: no of elements
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++n;
	}
	return (n);
}
