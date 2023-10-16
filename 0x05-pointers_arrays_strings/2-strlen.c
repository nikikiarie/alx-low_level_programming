#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}
