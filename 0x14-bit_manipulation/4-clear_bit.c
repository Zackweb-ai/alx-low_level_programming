/**
 * clear_bit - Clears the value of a bit at a specified index, setting it to 0.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (0 being the least significant bit).
 *
 * This function takes a pointer to an unsigned long
 * integer and clears the bit at
 * the specified index, setting it to 0.
 * It first checks if the index is valid (0 to 63)
 * and then uses bitwise operations to clear the bit.
 *
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear (set to 0).
 *
 * Return: 1 for success, -1 for failure (if index is out of range).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
