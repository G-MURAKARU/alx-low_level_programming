#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string to be reversed
 *
 * Return: null
 */
void rev_string(char *s)
{
int checker = 0;
int limits;
int counter;
double temp;
while (*(s + checker) != '\0')
{
checker++;
}
limits = (checker / 2);
counter = 0;
checker--;
while (counter < limits)
{
temp = *(s + counter);
*(s + counter) = *(s + checker);
*(s + checker) = temp;
counter++;
checker--;
}
return;
}
