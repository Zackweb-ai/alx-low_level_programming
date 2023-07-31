#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: pointer to the memory block that will be filled
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: a new array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
