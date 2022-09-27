#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array elements
 * @a: address to first array value
 * @n: number of values to print
 *
 * Return: null
 */
void print_array(int *a, int n)
{
int counter;
int array_length = sizeof(*a) / sizeof(int);
if (n != array_length)
{
n = array_length;
}
for (counter = 0; counter < n - 1; counter++)
{
printf("%d, ", *(a + counter));
}
printf("%d\n", *(a + (n - 1)));
return;
}
