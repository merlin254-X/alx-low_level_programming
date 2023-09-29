#include "main.h"
#include <stdio.h>
/**
 * _atoi_recursive - Converts a string to an integer recursively.
 * @s: The string to be converted.
 * @sign: Current sign of the number.
 * @result: Current result being built.
 * Return: The integer value converted from the string.
 */
int _atoi_recursive(char *s, int sign, int result)
{
int digit;

if (*s == '\0' || (*s < '0' || *s > '9'))
{
return (result * sign);
}

digit = *s - '0';
return (_atoi_recursive(s + 1, sign, result * 10 + digit));
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
int sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}

return (_atoi_recursive(s, sign, 0));
}

