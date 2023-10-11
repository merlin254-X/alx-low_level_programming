#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name of the person
 * @f: A function pointer to a print function
 * for formatting the name
 * Return: nothing
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
