#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: list_t to e freed
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
