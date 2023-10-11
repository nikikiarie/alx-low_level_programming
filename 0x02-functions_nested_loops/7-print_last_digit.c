#include "main.h"

/**
 * print_last_digit - printslast digit of a number
 *
 * @i: number checked
 * Return: j
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
