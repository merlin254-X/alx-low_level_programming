#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a
 * new string which is a duplicate of the string str
 * @str: string
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer
 * to the duplicated string. It returns NULL if insufficient
 * memory was available
 *
 */

char *_strdup(char *str)
{
		char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
