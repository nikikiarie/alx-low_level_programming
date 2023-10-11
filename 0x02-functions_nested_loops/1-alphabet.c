#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
