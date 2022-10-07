#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if errors
 */
int main (int argc, char *argv[])
{
  int product;
  if (argc != 3)
    {
      printf("Error\n");
      return (1);
    }
  product = atoi(argv[1]) * atoi(argv[2]);
  printf("%d\n", product);
  return (0);
}
