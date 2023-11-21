#include <stdio.h>
#include "lists.h"
/**
 * looped_llen - sum of unique nodes
 * @head: pointer to head of list
 * Return: 0 if list isnt looped
 */
size_t looped_llen(const listint_t *head)
{
	size_t u = 1;
	const listint_t *a, *z;

	if (head == NULL || head->next == NULL)
		return (0);
	z = head->next;
	a = (head->next)->next;
	while (a)
	{
		if (z == a)
		{
			z = head;
			while (z != a)
			{
				u++;
				z = z->next;
				a = a->next;
			}
			z = z->next;
			while (z != a)
			{
				u++;
				z = z->next;
			}
			return (u);
		}
		z = z->next;
		a = (a->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to list head
 * Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t u, i = 0;

	u = looped_llen(head);
	if (u == 0)
	{
		for (; head != NULL; u++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < u; i++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (u);
}
