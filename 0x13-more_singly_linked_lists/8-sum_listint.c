#include "lists.h"

int summer(listint_t *, int);

/**
 * sum_listint - sums numerical data stored in a linked list
 * @head: pointer to the head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	sum = summer(head, sum);
	return (sum);
}

/**
 * summer - recursive helper function
 * @current_node: current node
 * @sum: current sum of data
 *
 * Return: sum of data
 */
int summer(listint_t *current_node, int sum)
{
	if (!current_node)
		return (sum);
	return (summer(current_node->next, (sum += current_node->n)));
}

