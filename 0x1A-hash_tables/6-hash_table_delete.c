#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht:  pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n, *temp;
	hash_table_t *h = ht;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			n = ht->array[a];
			while (n != NULL)
			{
				temp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = temp;
			}
		}
	}
	free(h->array);
	free(h);
}
