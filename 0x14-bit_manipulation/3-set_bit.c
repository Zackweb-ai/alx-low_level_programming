#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1 in an unsigned long integer.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set to 1
 * (0 being the least significant bit).
 *
 * This function takes a pointer to an unsigned
 * long integer and sets the bit at
 * the specified index to 1. It first checks
 * if the index is valid (0 to 63) and
 * then uses bitwise operations to set the bit.
 *
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure (if index is out of range).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
		return (1);
}
