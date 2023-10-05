#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (p);
}
