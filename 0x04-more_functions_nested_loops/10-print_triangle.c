#include "main.h"
#include <stdio.h>
/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: triangle size
 * Return: 0
 */
void print_triangle(int size)
{
	int i, hash;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (i = size - hash; i > 0; i--)
				_putchar(' ');
			for (i = 0; i < hash; i++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
