#include <stdio.h>
/**
 * main - The entry point of the program
 *
 * Return: return 0 on success, non-zero on failure
 */

int main(void)
{
long long int a = 1, b = 2, sum = 0;
while (b <= 4000000)
{
if (b % 2 == 0)
{
sum += b;
}
long long int temp = a + b;
a = b;
b = temp;
}

printf("%lld\n", sum);

return (0);
}

