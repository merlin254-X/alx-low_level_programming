#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @haystack: The string to search.
 * @needle: The substring to find.
 * Return: A pointer to the beginning of the
 * located substring in `haystack`,
 * or NULL if the substring is not found.
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}

while (*haystack != '\0')
{
if (*haystack == *needle)
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
}
haystack++;
}
return (NULL);
}

