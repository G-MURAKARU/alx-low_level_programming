#include "lists.h"

/**
 * dlistint_len - prints elements of a doubly linked list dlistint_t
 * @h: pointer to dlistint_t head node
 *
 * Return: number of list nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	const dlistint_t **current_pointer;
	int counter = 0;

	current = h;
	current_pointer = &current;

	while (current)
	{
		*current_pointer = current->next;
		counter++;
	}

	return (counter);
}

