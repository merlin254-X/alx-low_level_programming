#include <stdio.h>

/**
 * main - Entry point
 * Description - C program that prints the size of various types
 * Return: Always 0 when successiful
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %hu byte(s)\n", (unsigned int) sizeof(c));
printf("Size of an int: %hu byte(s)\n", (unsigned int) sizeof(i));
printf("Size of a long int: %hu byte(s)\n", (unsigned int) sizeof(li));
printf("Size of a long long int: %hu byte(s)\n", (unsigned int) sizeof(lli));
printf("Size of a float: %hu byte(s)\n", (unsigned int) sizeof(f));
return (0);
}

