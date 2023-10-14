#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string provided
 *
 *
 *
 */


void puts_half(char *str)
{
		int length = strlen(str);
		int i;
		int start;

	if (str == NULL)
		return;

	length = strlen(str);


	if (length % 2 == 0)
	{

		start = length / 2;
	}
	else
	{

		start = (length - 1) / 2;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
