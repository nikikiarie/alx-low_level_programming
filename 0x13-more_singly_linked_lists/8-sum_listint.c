#include "lists.h"
/**
 * @sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: first node in list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *a = head;
	int i = 0;

	while (a)
	{
		i += a->n;
		a = a->next;
	}
	return (i);
}
