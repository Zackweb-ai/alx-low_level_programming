#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a
 * specified index in a decimal number.
 * @n: The decimal number from which to extract the bit.
 * @index: The index of the bit to retrieve
 * (0 being the least significant bit).
 *
 * This function takes a decimal number and an
 * index and returns the value of the
 * bit at the specified index. It first checks if the
 * index is valid (less than or
 * equal to 63) and then extracts the bit by
 * shifting the number to the right by the
 * index positions and using a bitwise AND operation to isolate the bit.
 *
 * @n: The decimal number from which the bit is extracted.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value (0 or 1) of the bit at
 * the specified index. If the index is out of range, it returns -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

		return (value);
}
