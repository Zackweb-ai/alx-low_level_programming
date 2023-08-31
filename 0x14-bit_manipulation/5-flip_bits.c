#include "main.h"

/**
 * flip_bits - Counts the number of differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * This function calculates and returns the number of bits that need to be
 * flipped in 'n' to obtain 'm'. It achieves this by performing an exclusive
 * OR (XOR) operation between 'n' and 'm' to isolate the differing bits.
 * Then, it counts and returns the total number of differing bits.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of differing bits between 'n' and 'm'.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
