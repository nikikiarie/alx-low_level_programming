#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first num
 * @m: second num
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int a = n ^ m;

	while (a)
	{
		if (a & 1ul)
			i++;
		a = a >> 1;
	}
	return (i);
}
