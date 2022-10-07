#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring to locate
 *
 * Return: pointer to substring beginning
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int haystack_counter = 0;
unsigned int needle_counter = 0;
char *start_pointer = NULL;
while (*(haystack + haystack_counter) != '\0')
{
while (*(needle + needle_counter) != '\0')
{
if (*(haystack + haystack_counter) == *(needle + needle_counter))
{
if (start_pointer == NULL)
{
start_pointer = haystack + haystack_counter;
}
needle_counter++;
haystack_counter++;
}
else
{
start_pointer = NULL;
needle_counter = 0;
break;
}
}
if (*(needle + needle_counter) == '\0')
{
return (start_pointer);
}
haystack_counter++;
}
return (NULL);
}
