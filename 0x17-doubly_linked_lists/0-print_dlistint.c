#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list dlistint_t
 * @h: pointer to dlistint_t head node
 *
 * Return: number of list nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	const dlistint_t **current_pointer;
	int counter = 0;

	current = h;
	current_pointer = &current;

	while (current)
	{
		printf("%i\n", current->n);
		*current_pointer = current->next;
		counter++;
	}

	return counter;
}

