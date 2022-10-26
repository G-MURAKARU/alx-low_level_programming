#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to pointer to head node
 * @idx: index to insert node
 * @n: value to be stored in node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(
		listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *my_pointer;
	listint_t *my_other_pointer;
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	my_pointer = *head;
	while (counter < idx)
	{
		if (!(my_pointer)->next)
			return (NULL);
		my_other_pointer = my_pointer;
		my_pointer = my_pointer->next;
		counter++;
	}
	my_other_pointer->next = new_node;
	new_node->next = my_pointer;
	return (new_node);
}

