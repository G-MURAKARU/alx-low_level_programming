#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * @n: no. of s2 characters to concatenate with s1
 *
 * Return: pointer to first character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int string_length = 0;
unsigned int s1_length;
char *char_pointer;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (*(s1 + string_length) != '\0')
{
string_length++;
}
s1_length = string_length;
string_length = 0;
while (*(s2 + string_length) != '\0')
{
string_length++;
}
if (string_length < n)
{
n = string_length;
}
char_pointer = malloc(sizeof(char) * (s1_length + n + 1));
if (char_pointer == NULL)
{
return (NULL);
}
string_length = 0;
while (*(s1 + string_length))
{
char_pointer[string_length] = *(s1 + string_length);
string_length++;
}
while (n--)
{
char_pointer[string_length] = *(s2 + (string_length - s1_length));
string_length++;
}
char_pointer[string_length] = '\0';
return (char_pointer);
}
