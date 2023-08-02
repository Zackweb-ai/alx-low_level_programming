#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the square root
 */


int square(int n, int in);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * actual_sqrt_recursion -  finds the square root
 * @n: number
 * @in: current integer being checked
 * Return: the result
 */

int square(int n, int in)
{
	if (in * in < n)
		return (square(n, in + 1));
	if (in * in == n)
		return (n);
	else
		return (-1);
}


