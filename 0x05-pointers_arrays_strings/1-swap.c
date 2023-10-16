#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value to be changed
 * @b: value to be changed
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
