#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dl = 0;
	int sl = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dl++;
	for (i = 0; src[i] != '\0'; i++)
		sl++;
	for (i = 0; i <= sl; i++)
		dest[dl + i] = src[i];
	return (dest);
}
