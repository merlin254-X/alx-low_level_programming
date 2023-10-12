#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -	prints anything.based on a format string
 * @format: A format string indicating the types of
 * the following arguments
 * @...: Variable number of arguments to be printed
 *
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}

		i++;
	}
	printf("\n");
	va_end(args);
}

