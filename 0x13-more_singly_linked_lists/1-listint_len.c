#include "lists.h"
/**
 * listint_len - eturns the number of elements in a linked listint_t list
 * @h: linked list to traverse
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;
	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
