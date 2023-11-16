#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t
 * @str: string to new node
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *a;
	list_t *z = *head;

	while (str[i])
		i++;
	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);
	a->str = strdup(str);
	a->len = i;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (z->next)
		z = z->next;
	z->next = a;
	return (a);
}
