#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the main function
 * Description: Assigning a random number to a variable n when it is executed
 * Return: Always return 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;

if (digit > 5)
printf("digit of %i is %i and is greater than 5\n", n, digit);
else if (digit == 0)
printf("digit of %i is %i and is 0\n", n, digit);
else if (digit < 0 && digit != 0)
printf("digit of %i is %i and is less than 6 and not 0\n", n, digit);
return (0);
}
