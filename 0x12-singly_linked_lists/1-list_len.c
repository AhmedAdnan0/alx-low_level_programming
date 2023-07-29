#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h->next)
	{
		++n;
		h = h->next;
	}
	return (n + 1);
}
