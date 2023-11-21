#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first element in list pointer
 * Return: data that was deleted
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *a;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;
	return (i);
}
