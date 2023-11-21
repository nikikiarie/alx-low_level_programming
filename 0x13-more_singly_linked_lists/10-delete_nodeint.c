#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: first element pointer
 * @index: index of node to delete
 * Return: 1 0n success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *a = NULL;
	listint_t *t = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (i < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		i++;

	}
	a = t->next;
	t->next = a->next;
	free(a);
	return (1);
}
