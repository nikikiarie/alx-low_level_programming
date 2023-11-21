#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: first node pointer
 * @idx: new node index
 * @n: data to insert
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a;
	listint_t *t = *head;
	unsigned int i;

	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}
	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			a->next = t->next;
			t->next = a;
			return (a);
		}
		else
			t = t->next;
	}
	return (NULL);
}
