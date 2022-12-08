#include "lists.h"

/**
 * add_dnodeint - adds node at rhe beginning of a dlistint_t list
 * @head: pointer to dlistint_t head node
 * @n: node value
 *
 * Return: new node address on success, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

