#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked
 * @h: pointer to list_h
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);

}
