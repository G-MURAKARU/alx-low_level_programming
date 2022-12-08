#include "lists.h"

/**
 * get_dnodeint_at_index - return snth node of a linked list
 * @head: pointer to head node
 * @index: index of node to return [zero-indexing]
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (!index)
		return (head);
	return (get_dnodeint_at_index(head->next, (index - 1)));
}
