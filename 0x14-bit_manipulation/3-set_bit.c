#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: input integer [pointer]
 * @index: index to investigate
 *
 * Return: 1 if worked, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index >  63)
		return (-1);

	(*n) = (*n) >> index;
	(*n) = (*n) | 1;
	(*n) = (*n) << index;
	return (1);
}

