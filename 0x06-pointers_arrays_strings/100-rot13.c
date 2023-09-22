#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: Encodes a string using the ROT13 cipher.
 * Return: A pointer to the modified string
 *
 */


char *rot13(char *str)

{
	char *p = str;

	while (*p)

	{
		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
		{
			*p += 13;
		}
		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (str);
}

