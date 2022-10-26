#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its data
 * @head: pointer to pointer to head node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!*head)
		return (0);
	if (!(*head)->next)
	{
		data = (*head)->n;
		free(*head);
		*head = NULL;
		return (data);
	}
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}

