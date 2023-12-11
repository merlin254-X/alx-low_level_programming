#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes.
 * @s:  string
 * @accept: strings where the bytes are located
 * Return: Returns a pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
char *c;
while (*s != '\0')
{
for (c = accept; *c != '\0'; c++)
{
if (*s == *c)
{
return (s);
}

}
s++;
}
return (NULL);
}
