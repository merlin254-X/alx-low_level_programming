#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);

}
