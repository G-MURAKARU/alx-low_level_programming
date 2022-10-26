#include "lists.h"

/**
 * listint_len - calculates number of elements in a singly-linked list
 * @h: pointer to the head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);
	while (1)
	{
		node_count++;
		if (!h->next)
			break;
		h = h->next;
	}
	return (node_count);
}

