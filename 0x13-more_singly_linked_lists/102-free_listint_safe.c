#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: first node pointer
 * Return: no of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *a;
	int p;
	size_t i = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		p = *h - (*h)->next;
		if (p > 0)
		{
			a = (*h)->next;
			free(*h);
			*h = a;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}

	}
	*h = NULL;
	return (i);
}
