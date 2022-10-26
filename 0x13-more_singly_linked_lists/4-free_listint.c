#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head node
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

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

