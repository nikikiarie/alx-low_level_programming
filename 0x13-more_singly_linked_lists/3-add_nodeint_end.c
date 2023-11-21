#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to first element
 * @n: data to insert
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *t = *head;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (t->next)
		t = t->next;
	t->next = a;
	return (a);
}
