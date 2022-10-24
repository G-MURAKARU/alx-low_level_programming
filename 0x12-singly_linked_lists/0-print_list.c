#include "lists.h"

/**
 * print_list - prints the contents of a singly-linked list
 * @h: pointer to the head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (1)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		node_count++;
		if (!h->next)
			break;
		h = h->next;
	}
	return (node_count);
}

