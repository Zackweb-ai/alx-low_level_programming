#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The decimal number to be printed in binary.
 *
 * This function takes an unsigned long integer and prints its binary
 * representation to the standard output. It does so by iterating through
 * the bits of the number, starting from the most significant bit (leftmost),
 * and printing '1' or '0' depending on the value of each bit. Leading zeros
 * are omitted to ensure a concise representation.
 *
 * @n: The decimal number to be converted and printed in binary.
 */


void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
