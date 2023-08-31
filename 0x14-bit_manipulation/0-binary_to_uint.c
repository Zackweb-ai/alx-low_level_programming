#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A string containing the binary number (0s and 1s).
 *
 * This function takes a binary string and converts it into its equivalent
 * unsigned integer representation. It iterates through each character in the
 * string, checks if it's a valid binary digit (0 or 1), and constructs the
 * decimal (unsigned integer) value accordingly.
 *
 * @b: The binary string to be converted.
 *
 * Return: The converted unsigned integer value. If the input string is NULL
 *         or contains characters other than '0' and '1', it returns 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
