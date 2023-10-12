#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - Sums all its parameters
 * @n: The number of arguments to be summed
 * @...: A variable number of integer arguments
 * Return: The sum of all the arguments,
 * or 0 if there are no arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
		va_list args;
		unsigned int i;
		int sum = 0;

		va_start(args, n);
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		va_end(args);
		return (n == 0 ? 0 : sum);

}
