#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to pointer to head node
 * @index: deleted node's index [zero-indexing]
 *
 * Return: 1 if successful, -1 if errors
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *my_pointer;
	listint_t *my_other_pointer;
	unsigned int counter = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	my_pointer = *head;
	while (counter < index)
	{
		if (!my_pointer->next)
			return (-1);
		my_other_pointer = my_pointer;
		my_pointer = my_pointer->next;
		counter++;
	}

	temp = my_pointer;
	my_other_pointer->next = my_pointer->next;
	free(temp);
	return (1);
}

