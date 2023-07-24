#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int c;

	while (*s[c])
		c++;

	while (c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

