#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number type input for the function.
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int ld;
	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
