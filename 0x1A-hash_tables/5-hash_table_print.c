#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash tble pointer
 * Description: prints key/value pairs
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned char f = 0;
	unsigned long int a;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (f == 1)
				printf(", ");
			n = ht->array[a];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			f = 1;
		}
	}
	printf("}\n");
}
