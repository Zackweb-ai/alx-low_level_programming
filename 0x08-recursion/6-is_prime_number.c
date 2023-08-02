#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number
 * @in: current integer being checked
 * Return: 1 if n is a prime number, 0 if not
 */

int prime(int n, int in);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - cheks if a number is a prime or not
 * @n: number
 * @in: current integer being checked
 * Return: 1 if n is prime, 0 if not
 */

int prime(int n, int in)
{
	if (in >= n && n > 1)
		return (1);
	if (n % in == 0 || n <= 1)
		return (0);
	else
		return (prime(n, in + 1));
}
