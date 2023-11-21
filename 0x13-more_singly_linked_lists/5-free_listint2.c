#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;
	while (*head)
	{
		a = (*head)->next;
		free(head);
		*head = a;
	}
	*head = NULL;
}
