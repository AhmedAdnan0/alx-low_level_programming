#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list head
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (1)
		{
			free(head->str);
			if (head->next == NULL)
			{
				free(head);
				break;
			}
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
