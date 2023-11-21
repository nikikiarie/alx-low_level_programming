#include "lists.h"
/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: first node of list
 * @index: node to return
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a = head;
	unsigned int i = 0;

	while (a && i < index)
	{
		a = a->next;
		i++;
	}
	return (a ? a : NULL);
}
