#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @head: pointer to a pointer to the head node
 * @n: contents of the new node
 *
 * Return: address of new node element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_pointer = malloc(sizeof(listint_t));

	if (new_node_pointer == NULL)
		return (NULL);

	new_node_pointer->n = n;
	new_node_pointer->next = *head;
	*head = new_node_pointer;
	return (*head);
}

