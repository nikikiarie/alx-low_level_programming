#include "main.h"

/**
 * string_toupper - changes all lowercase letters uppercase
 * @i: pointer
 * Return: i
 */

char *string_toupper(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] = i[j] - 32;
	}
	return (i);
}
