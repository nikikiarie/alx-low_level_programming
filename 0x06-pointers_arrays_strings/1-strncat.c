#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: no of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[j + i] = *src;
		src++;
	}
	dest[j + i] = '\0';
	return (dest);
}
