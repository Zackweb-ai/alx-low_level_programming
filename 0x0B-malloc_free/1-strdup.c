#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: pointer to the duplicated string, NULL in failure
 */

char *_strdup(char *str)
{
	char *b;
	int i = 0, s = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	b = malloc(sizeof(char) * (i + 1));

	if (b == 0)
		return (NULL);

	for (s = 0; str[s]; s++)
		b[s] = str[s];

	return (b);
}

