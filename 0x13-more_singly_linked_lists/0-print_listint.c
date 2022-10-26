#include "lists.h"

/**
 * print_listint - prints the contents of a singly-linked list
 * @h: pointer to the head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);
	while (1)
	{
		printf("%i\n", h->n);
		node_count++;
		if (!h->next)
			break;
		h = h->next;
	}
	return (node_count);
}

