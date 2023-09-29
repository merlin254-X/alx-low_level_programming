#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program multiplies two numbers and prints the result,
 * followed by a newline. It expects exactly two integer arguments, multiplies
 * them, and prints the result. If the program does not receive two arguments,
 * it prints "Error" followed by a newline and returns 1 to indicate an error.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{

printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;

printf("%d\n", result);

return (0);
}
