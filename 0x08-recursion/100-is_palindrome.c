#include "main.h"

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
 * is_palindome - checks if a string is a palindrome
 * @s: string to test
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
  int checker = 0;
  int start = 0;
  while (*(s + checker) != '\0')
    {
      checker++;
    }
  return (check_palindrome(s, start, checker - 1));
}
