#include "main.h"

/**
 * _isdigit - cheks if the inpust is a digit between 0-9 .
 *
 * @c: input .
 *
 * Return: 1 if digit, if not returns 0 .
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

