#include "lists.h"

/**
 * sum_listint - gets list sum
 * @head: list head
 * Return: list sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
