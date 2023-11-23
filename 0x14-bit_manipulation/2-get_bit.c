#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: int to index
 * @index: bit to get
 * Return: bit state
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
