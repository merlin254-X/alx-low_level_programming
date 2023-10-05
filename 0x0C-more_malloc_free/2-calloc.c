#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array
 * @size: the size of the memory to print
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
