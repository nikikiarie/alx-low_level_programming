#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: int
 * Return: NULL
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, i = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
