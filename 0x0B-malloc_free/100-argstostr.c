#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 * Return: A pointer to the concatenated string,
 * or NULL if it fails.
 *
 *
 */
char *argstostr(int ac, char **av)
{
	int i,  len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}

	return (str);
}
