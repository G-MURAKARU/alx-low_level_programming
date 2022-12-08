#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head node
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	while (1)
	{
		temp = head->next;
		free(head);
		head = temp;
		if (!head)
			break;
	}
}
