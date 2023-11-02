#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: no ofmembers
 * @size: size
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	d = malloc(b);
	if (d == NULL)
		return (NULL);
	while (a < b)
	{
		d[a] = 0;
		a++;
	}
	return (d);
}
