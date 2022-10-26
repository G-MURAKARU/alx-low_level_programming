#include "lists.h"

/**
 * get_nodeint_at_index - return snth node of a linked list
 * @head: pointer to head node
 * @index: index of node to return [zero-indexing]
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (!index)
		return (head);
	return (get_nodeint_at_index(head->next, (index - 1)));
}

