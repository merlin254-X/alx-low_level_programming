#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program adds positive numbers and prints the result,
 * followed by a new line. If no numbers are passed, it prints 0 followed
 * by a new line. If one of the numbers contains symbols that are not digits,
 * it prints "Error" followed by a new line and returns 1 to indicate an error.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i;
int num = 0;

if (argc < 2)
{

printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

num = atoi(argv[i]);

if (num == 0 && argv[i][0] != '0')


printf("Error\n");
return (1);
}

if (num > 0)
{

num += num;
}


printf("%d\n", num);

return (0);
}
