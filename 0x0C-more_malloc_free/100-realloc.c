#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to old size
 * @old_size: size of mem allocated to ptr
 * @new_size: size of new mem
 * Return: if ptr != null then NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	void *pt;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		return (pt);
	}
	if (new_size > old_size)
	{
		pt = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)pt + a) = *((char *)ptr + a);
		free(ptr);
	}
	return (pt);
}
