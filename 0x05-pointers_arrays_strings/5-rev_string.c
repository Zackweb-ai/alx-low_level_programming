#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: The string in reverse
 */

void rev_string(char *s)
{
	int count = 0;
	char revchar = s[0];
	int i;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		revchar = s[i];
		s[i] = s[count];
		s[count] =  rev;
	}
}
