#include "main.h"

int sqt(int n, int i);
/**
 * _sqrt_recursion - natural square root of a number
 * @n: num
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqt(n, 1));
}

/**
 * sqt - natural square root of a number
 * @n: num
 * @i: square root
 * Return: int
 */
int sqt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqt(n, i + 1));
	else
		return (-1);
}
