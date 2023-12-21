#include <stdio.h>
/**
 * div - Divides the two integers.
 * @a: The numerator.
 * @b: The denominator.
 * This function divides the numerator by the
 * denominator and returns the result.
 * If the denominator is zero, an error message
 * is printed to stderr, and 0 is returned.
 *
 * Return: The result of dividing the numerator by the denominator.
 */
int div(int a, int b)
{
    if (b != 0)
{
        return (a / b);
}
else
{
        fprintf(stderr, "Error: Division by zero\n");
        return (0);
}
}
