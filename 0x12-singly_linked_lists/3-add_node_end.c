#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the list head
 * @str: new string
 *
 * Return: pointer to the new element
 *		   NULL (Failed)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
