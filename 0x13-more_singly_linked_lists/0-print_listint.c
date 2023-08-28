#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listnt(const listint_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		printf("%d", h->n);
		num_nodes++
		h = h->next;
	}
	return (num_nodes);
}
