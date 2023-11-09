#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string printed before strings
 * @n: no of strings passed
 * @...: variable no of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list st;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(st, char *);
		if (!s)
			s = "nil";
		if (!separator)
			printf("%s",s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(st);
}
