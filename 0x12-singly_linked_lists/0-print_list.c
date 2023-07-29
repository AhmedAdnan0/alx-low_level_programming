#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 *
 * Return: no of printed elements
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (1)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		++n;
		if (h->next == NULL)
			return (n);
		h = h->next;
	}
}
