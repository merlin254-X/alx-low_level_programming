#include <stdio.h>
#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @s: string to be reversed
 * Return: nothing
 *
 *
 *
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = length - 1;

	if (s == NULL)
		return;

	length = 0;

	while (s[length] != '\0')

		length++;

	start = 0;
	end = length - 1;

	while (start < end)
	{

		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;


		start++;
		end--;
	}
}
