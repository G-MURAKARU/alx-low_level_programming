#include <stdio.h>
#include <stdlib.h>

/**
 * fizz_buzz - Fizz Buzz
 *
 * Return: null
 */
void fizz_buzz(void)
{
int counter;
for (counter = 1; counter <= 100; counter++)
{
if (counter % 5 == 0 && counter % 3 == 0)
{
printf("FizzBuzz ");
}
else if (counter % 5 == 0)
{
printf("Buzz ");
}
else if (counter % 3 == 0)
{
printf("Fizz ");
}
else
{
printf(counter);
printf(" ");
}
}
printf('\n');
return;
}
