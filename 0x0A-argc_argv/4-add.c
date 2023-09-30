#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 if no number is passed, 1 if an
 * error occurs, or the sum of the numbers
 */
int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		if (num > 0)
			sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
