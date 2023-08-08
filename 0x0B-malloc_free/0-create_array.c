#include "main.h"

/**
 * create_array - creates an array of chars, and
 *initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(size);
	if (size == 0 || s == NULL)
		return (NULL);

	while (size--)
		s[size] = c;
	return (s);
}

