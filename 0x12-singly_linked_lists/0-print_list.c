#include "main.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 *
 * Return: no of printed elements
 */

size_t print_list(const list_t *h)
{
	list_t *current;
	size_t n = 0;

	if (h == NULL)
		return (n);

	current = h->next;

	while (1)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		++n;
		if (current->next == NULL)
			return(n)
		current == currnet->next;
	}
}
