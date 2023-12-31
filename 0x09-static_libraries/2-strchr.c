#include "main.h"

/**
 * _strchr - Entry point
 * @s: Pointer to the string in which the character will be searched.
 * @c: the character to be located
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
