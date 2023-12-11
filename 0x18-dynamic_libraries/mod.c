
#include <stdio.h>
/**
 * mod - Computes the remainder of the division of two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The remainder of the division of the numerator by the denominator.
 */
int mod(int a, int b)
{
    if (b != 0)
{
        return (a % b);
}
else
{
        fprintf(stderr, "Error: Modulo by zero\n");
        return (0);
}
}
