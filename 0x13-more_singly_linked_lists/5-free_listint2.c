#include "lists.h"

/**
 * free_listint2 - frees up a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listsint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;

	}

	*head = NULL;
}
