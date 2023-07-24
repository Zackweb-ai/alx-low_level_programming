#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first dnteger to swap
 * @b: second integer to swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
