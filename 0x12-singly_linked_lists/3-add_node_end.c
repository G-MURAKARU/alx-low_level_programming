#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the head node
 * @str: contents of new node
 *
 * Return: address of new node element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_pointer = malloc(sizeof(list_t));
	list_t *pointer;
	int str_counter = 0;

	if (!new_node_pointer)
		return (NULL);

	if (str)
	{
		new_node_pointer->str = strdup(str);
		while (*(str + str_counter))
			str_counter++;
		new_node_pointer->len = str_counter;
	}
	else
	{
		new_node_pointer->str = "(nil)";
		new_node_pointer->len = 0;
	}
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

