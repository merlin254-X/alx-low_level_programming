#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the
 * factorial of a given number.
 * @n: imput function
 * Return: -1 if n < 0 or 1 if n == 0
 *
 *
 */

int factorial(int n)
{
int i = 1;
int result = i;

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
for (i = 1; i <= n; ++i)
{
result *= i;
}
return (result);
}
}
