#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Helper function to check
 * if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The index of the first character.
 * @end: The index of the last character.
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (is_palindrome_recursive(s, start + 1, end - 1));
}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);

if (length <= 1)
return (1);

return (is_palindrome_recursive(s, 1, length - 2));
}
