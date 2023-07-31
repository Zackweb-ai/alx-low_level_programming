#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: Pointer to the string in which the search will be performed.
 * @needle: Pointer to the string that represents the substring to be found
 * Return: a pointer to the beginning of the located substring
 *	or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}


