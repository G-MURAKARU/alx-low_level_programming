#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of dlistint_t list
 * @head: double pointer to head node
 * @n: new node value
 *
 * Return: new node address on success, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
