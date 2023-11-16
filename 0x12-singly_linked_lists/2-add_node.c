#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: double pointer to list_t
 * @str: string to add
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	unsigned int l = 0;

	while (str[l])
		l++;
	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);
	i->str = strdup(str);
	i->len = l;
	i->next = (*head);
	(*head) = i;
	return (*head);
}
