#include "main.h"

/**
 * _isalpha - function that checks if character
 *	is an alphabetic character
 * @c: takes input from other functions
 * Return: returns 1 if c is a  alphabetic character otherwise
 *	return 1 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);

}
