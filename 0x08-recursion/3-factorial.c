#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: number to return the factorial from
* Return: factorial of a number or-1 if n lower than 0
*/

int factorial(int n)
{
	if (n < 0)

	return (-1);

	if (n == 0)

	return (1);

	return (n * factorial(n - 1));
}
