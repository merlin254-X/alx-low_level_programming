#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 * @a: The integer to find the absolute value of.
 *
 * Return: The absolute value of a.
 *
 *
 *
 */

int _abs(int a)

{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
