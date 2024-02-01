#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: array size
 * Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;
	hash_table_t *htb;

	htb = malloc(sizeof(hash_table_t));
	if (htb == NULL)
		return (NULL);
	htb->size = size;
	htb->array = malloc(size * sizeof(hash_node_t *));
	if (htb->array == NULL)
	{
		free(htb);
		return (NULL);
	}
	for (a = 0; a < size; a++)
		htb->array[a] = NULL;
	return (htb);
}
