#include "lists.h"

/**
 * add_node - adds a new node at the start of a linked list
 * @head: pointer to a pointer to the head node
 * @str: contents of the new node
 *
 * Return: address of new node element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node_pointer = malloc(sizeof(list_t));
	int str_counter = 0;

	if (new_node_pointer == NULL)
	{
		printf("here\n");
		return (NULL);
	}
	while (*(str + str_counter))
		str_counter++;
	new_node_pointer->str = strdup(str);
	new_node_pointer->len = str_counter;
	new_node_pointer->next = *head;
	*head = new_node_pointer;
	return (*head);
}

