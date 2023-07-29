#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: node->string
 *
 * Return: the address of the new element
 *         NULL (failed)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;

	return (*head);
}
