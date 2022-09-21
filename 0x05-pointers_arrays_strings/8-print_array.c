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
for (counter = 0; counter < n - 1; counter++)
{
printf("%d, ", *(a + counter));
}
 printf("%d\n", *(a + (n - 1)));
return;
}
