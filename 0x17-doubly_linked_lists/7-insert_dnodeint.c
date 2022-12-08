#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @head: pointer to pointer to head node
 * @idx: index to insert node
 * @n: value to be stored in node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *my_pointer;
	dlistint_t *my_other_pointer;
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
		return (*head);
	}
	my_pointer = *head;
	while (counter < idx)
	{
		if (!my_pointer)
			return (NULL);
		my_other_pointer = my_pointer;
		my_pointer = my_pointer->next;
		counter++;
	}
	my_other_pointer->next = new_node;
	new_node->next = my_pointer;
	new_node->prev = my_other_pointer;
	my_pointer->prev = new_node;
	return (new_node);
}
