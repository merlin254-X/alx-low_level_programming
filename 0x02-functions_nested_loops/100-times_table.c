#include "main.h"

/**
 * print_times_table - Print the n times table.
 * @n: The value up to which the times table should be printed.
 *
 * Description: This function prints the times table
 * If 'n' is greater than 15 or less than 0, nothing is printed.
 */
void print_times_table(int n)
{
int i, j, result;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;

if (j > 0)
{
_putchar(' ');
if (result < 10)
_putchar(' ');
}

if (result < 100)
_putchar(' ');

if (result >= 100)
_putchar(result / 100 + '0');

if (result >= 10)
_putchar((result / 10) % 10 + '0');

_putchar(result % 10 + '0');

if (j < n)
_putchar(',');
else
_putchar('\n');
}
}
}
}
