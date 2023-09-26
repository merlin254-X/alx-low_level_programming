#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: preoccupied with bytes
 * Return: Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;

while (*s != '\0' && strchr(accept, *s) != NULL)
{
i++;
s++;
}
return (i);
}

