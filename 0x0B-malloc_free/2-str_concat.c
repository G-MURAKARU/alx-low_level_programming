#include <stdlib.h>
#include "main.h"

/**
 * string_length - finds length of string
 * @str: pointer to input string
 * @start: count to start from
 *
 * Return: length of string
 */
int string_length(char *str, int start)
{
int counter = 0;
while (*(str + counter))
{
start++;
counter++;
}
return (start);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int required_memory = 0;
char *char_pointer;
int count = 0;
int helper_count;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
required_memory = string_length(s1, required_memory);
required_memory = string_length(s2, required_memory);
char_pointer = malloc(sizeof(char) * required_memory);
if (char_pointer == NULL)
{
return (NULL);
}
while ((count < required_memory) &&*(s1 + count))
{
char_pointer[count] = *(s1 + count);
count++;
}
helper_count = count;
while	((count < required_memory) &&*(s2 + (count - helper_count)))
{
char_pointer[count] = *(s2 + (count - helper_count));
count++;
}
return (char_pointer);
}
