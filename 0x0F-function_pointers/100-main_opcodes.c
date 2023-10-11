#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments as strings.
 *
 * Description: This function prints the opcodes of its
 * own main function.
 * It takes a single argument, the number of bytes to print
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;
	char *opcodes = (char *)main;
	int num_of_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_of_bytes; i++)
		printf("%02hhx ", opcodes[i]);

	printf("\n");
}
