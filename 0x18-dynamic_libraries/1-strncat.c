#include "main.h"

/**
 * _strncat - Return a pointer to the resulting string dest
 * @dest: imput function
 * @src: imput function
 * @n: imput value
 * Return: original_dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (original_dest);
}
