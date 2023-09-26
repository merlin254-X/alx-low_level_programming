#include "main.h"

/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest
 * @dest: memory area where is stored
 * @src: memory area where is copied
 * @n: number of bytes
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
