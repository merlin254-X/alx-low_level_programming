#include "main.h"


/**
 * leet - Encodes a string into 1337 speak.
 * @str: A pointer to the input string to be encoded.
 *
 * Return: A pointer to the modified string.
 *
 *
 *
 *
 *
 */

char *leet(char *str)

{
	char *p = str;

	while (*p)

	{
		if (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		else if (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		else if (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		else if (*p == 't' || *p == 'T')
		{
			*p = '7';
		}
		else if (*p == 'l' || *p == 'L')
		{
			*p = '1';
		}
		p++;
	}
	return (str);
}
