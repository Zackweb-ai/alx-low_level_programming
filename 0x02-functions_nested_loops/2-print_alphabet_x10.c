#include "main.h"

/**
 * print_alphabet_x10 - it's a function that prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int ln, lp;

	for (ln = 0; ln <= 9; ln++)
	{
		for (lp = 'a'; lp <= 'z'; lp++)
			_putchar(lp);
		_putchar('\n');
}
