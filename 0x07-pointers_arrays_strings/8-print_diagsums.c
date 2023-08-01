#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: an array
 * @size: size of the array
 * Return: prints the sums of the two diagonals using printf()
*/

void print_diagsums(int *a, int size)
{
	int s1, s2, c;

	s1 = 0;
	s2 = 0;

	for (c = 0; c < size; c++)
	{
		s1 = s1 + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		s2 += a[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
