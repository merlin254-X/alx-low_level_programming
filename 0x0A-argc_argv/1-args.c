#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program counts and prints the number of arguments
 * passed to it (excluding the program name itself) and then outputs
 * the count followed by a newline character.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}

