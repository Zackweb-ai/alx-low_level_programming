#include "main.h"

/**
 * leet - encodes a string  into 1337
 * @str: input value
 * Return: str
 */

char *leet(char *str)
{
	int i, a;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (str[i] == s1[a])
			{
				str[i] = s2[a];
			}
		}
	}
	return (str);
}

