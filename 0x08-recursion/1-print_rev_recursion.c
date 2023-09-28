#include "main.h"
#include <stdio.h>

int _putchar(char c);

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: imput function
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}

