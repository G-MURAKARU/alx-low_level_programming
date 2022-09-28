#include "main.h"
#include <stdio.h>

/**
 * check_palindrome - checks palindrome-ness
 * @s: string to test
 * @start_index: start index
 * @end_index: end index
 *
 * Return: confirmed palindrome-ness
 */
int check_palindrome(char *s, int start_index, int end_index)
{
if (end_index <= start_index)
{
return (1);
}
if (*(s + start_index) == *(s + end_index))
{
start_index++;
end_index--;
return (check_palindrome(s, start_index, end_index));
}
else
{
return (0);
}
}

/**
 * counter - recursive counter
 * @s: input string
 * @count: counter's current count
 *
 * Return: total count
 */
int counter(char *s, int count)
{
if (!*s)
{
return (count);
}
return (counter((s + 1), ++count));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to test
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
int count = 0;
int checker = counter(s, count);
int start = 0;
return (check_palindrome(s, start, checker - 1));
}
