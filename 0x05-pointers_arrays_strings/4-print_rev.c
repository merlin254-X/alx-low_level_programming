#include <stdio.h>
#include "main.h"


/**
 * print_rev -	prints a string, in reverse,
 * followed by a new line.
 * @s: string to be reversed
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
		return;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
