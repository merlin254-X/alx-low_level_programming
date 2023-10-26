#include "main.h"


/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
		return (1);
	else
		return (0);
}
