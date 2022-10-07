#include <stdio.h>

/**
 * main - prints all received arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
while(argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
