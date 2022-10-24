#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to head node
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (1)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
		if (!head)
			break;
	}
}

