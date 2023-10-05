#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string is a positive number.
 * @s: The string to check.
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s)
	{

		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0 on success, 98 on incorrect arguments or non-digit input.
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
