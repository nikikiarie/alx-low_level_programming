#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: no of params
 * @...: variable no of params
 * Return: if n == 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list b;

	va_start(b, n);
	for (i = 0; i < n; i++)
		sum += va_arg(b, int);
	va_end(b);
	return (sum);
}
