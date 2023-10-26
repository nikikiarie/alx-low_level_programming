#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number - check if num is prime
 * @n: num
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - eturns 1 if the input integer is a prime numbe
 * @n: num
 * @i: no of times
 * Return: prime 1
 */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i < 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime(n, i + 1));
}
