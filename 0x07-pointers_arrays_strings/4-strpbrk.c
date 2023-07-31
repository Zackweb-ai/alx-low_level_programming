#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: Pointer to the string in which the search will be performed.
 * @accept: Pointer to string containing the set
 *	of characters to be searched for
 * Return: a pointer to the byte in s that matches one of the bytes
 *	in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
	i	{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}

