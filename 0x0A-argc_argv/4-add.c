#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds input integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if errors
 */
int main(int argc, char *argv[])
{
int sum = 0;
int number;
int counter;
for (counter = 1; counter < argc; counter++)
{
number = atoi(argv[counter]);
if (number == 0 && argv[counter] != 0)
{
printf("Error\n");
return (1);
}
sum += number;
}
printf("%d\n", sum);
return (0);
}
