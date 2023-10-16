#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, count = 0, j;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	j = (count - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
