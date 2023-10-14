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
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	print_rev(s + 1);
	putchar(*s);
	
}
