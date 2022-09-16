#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fizz Buzz
 *
 * Return: null
 */
int main(void)
{
int counter;
printf("%d", 1);
for (counter = 2; counter <= 100; counter++)
{
if (counter % 5 == 0 && counter % 3 == 0)
{
printf(" FizzBuzz");
}
else if (counter % 5 == 0)
{
printf(" Buzz");
}
else if (counter % 3 == 0)
{
printf(" Fizz");
}
else
{
printf(" %d", counter);
}
}
printf("\n");
return (0);
}
