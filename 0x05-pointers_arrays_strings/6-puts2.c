#include <stdio.h>
#include "main.h"

/**
 * puts2 -	prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: given string
 * Return: nothing
 *
 *
 */
void puts2(char *str)
{
		int i = 0;

	if (str == NULL)
		return;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
