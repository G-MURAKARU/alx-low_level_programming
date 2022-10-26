#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the head node
 * @n: contents of new node
 *
 * Return: address of new node element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_pointer = malloc(sizeof(listint_t));
	listint_t *pointer;

	if (!new_node_pointer)
		return (NULL);

	new_node_pointer->n = n;
	new_node_pointer->next = NULL;

	if (!*head)
		*head = new_node_pointer;
	else
	{
		pointer = *head;
		while (pointer->next)
			pointer = pointer->next;

		pointer->next = new_node_pointer;
	}
	return (*head);
}

