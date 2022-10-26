#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to head node
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *my_pointer = *head;

	if (!my_pointer)
	{
		*head = NULL;
		return;
	}
	while (1)
	{
		temp = my_pointer->next;
		free(my_pointer);
		my_pointer = temp;
		if (!my_pointer)
			break;
	}
	free(my_pointer);
	*head = NULL;
}

