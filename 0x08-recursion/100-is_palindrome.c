#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int left = 0;
int right = strlen(s) - 1;

while (left < right)
{
if (s[left] != s[right])
{
return (0);
}
left++;
right--;
}

return (1);
}

