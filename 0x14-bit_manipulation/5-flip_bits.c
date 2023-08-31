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
    int index, bit_count = 0;
    unsigned long int bit_difference;
    unsigned long int exclusive = n ^ m;

    for (index = 63; index >= 0; index--)
    {
        bit_difference = exclusive >> index;
        if (bit_difference & 1)
            bit_count++;
    }

    return (bit_count);
}
