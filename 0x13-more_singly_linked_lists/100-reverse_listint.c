#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: first node pointer
 * Return: first node pointer to new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *z = NULL;

	while (*head)
	{
		a = (*head)->next;
		(*head)->next = z;
		z = *head;
		*head = a;
	}
	*head = z;
	return (*head);

}
