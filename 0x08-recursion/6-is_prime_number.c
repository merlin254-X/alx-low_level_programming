#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{

int divisor;

if (n <= 1)
{
return (0);
}

for (divisor = 2; divisor * divisor <= n; divisor++)
{
if (n % divisor == 0)
{
return (0);
}
}
return (1);
}
