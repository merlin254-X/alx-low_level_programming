#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program demonstrates basic
 * command-line argument handling
 * by printing the name of the program itself when executed.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
