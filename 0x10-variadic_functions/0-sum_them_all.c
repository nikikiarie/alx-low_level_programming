#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: no of params
 * @...: variable no of params
 * Return: if n == 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	unsigned int sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(a, const unsigned int);
	}
	va_end(a);
	return (sum);
}
