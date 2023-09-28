#include "main.h"

/**
 * is_divisible - Helper function to check if n is divisible by divisor.
 * @n: The number to check for divisibility.
 * @divisor: The divisor to test.
 * Return: 1 if n is divisible by divisor, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
if (n <= 1 || divisor == 1)
{
return (0);
}
else if (n == 2)
{
return (1);
}
else if (n % divisor == 0)
{
return (0);
}
else if (divisor * divisor > n)
{
return (1);
}
else
{
return (is_divisible(n, divisor + 1));
}
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (is_divisible(n, 2));
}
