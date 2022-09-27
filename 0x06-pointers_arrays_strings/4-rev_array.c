#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: an array of integers
 * @n: length of the array
 *
 * Return: null
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;
while (start < end)
{
temp = *(a + start);
*(a + start) = *(a + end);
*(a + end) = temp;
start++;
end--;
}
return;
}
