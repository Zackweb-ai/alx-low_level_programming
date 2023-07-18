#include "main.h"

/**
 * prints the aplhabet a - z
 * print_alphabet - uses the _putchar function to print
 * the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

