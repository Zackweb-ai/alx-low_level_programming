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
 * square -  finds the square root 
 * @in: current integer being checked
 * @n: number
 * Return: the result
*/

int square(int n, int in)
{
	if (in * in < n)
		return (square(n, in + 1));
	if (in * in == n)
		return (in);
	else
		return (-1);
}


