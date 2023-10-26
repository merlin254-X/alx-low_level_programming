#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned int i, flag = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & mask) != 0)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
