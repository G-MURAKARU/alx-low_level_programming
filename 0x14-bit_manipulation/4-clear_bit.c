#include "main.h"

/**
 * clear_bit - clears a bit at a given index
 * @n: input integer [pointer]
 * @index: index to investigate
 *
 * Return: 1 if worked, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clearer;
	if (!n)
		return (-1);
	if (index >  63)
		return (-1);

	clearer = 1 << index;

	if (*n & clearer)
		*n ^= clearer;

	return (1);
}

