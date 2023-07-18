#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print
 *	the alphabet, in lowercase, from a - z
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

