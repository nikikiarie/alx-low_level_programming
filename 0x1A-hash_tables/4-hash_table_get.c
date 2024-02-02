#include "hash_tables.h"
/**
 * hash_table_get - prints hash table
 * @ht: hash tble pointer
 * @key: key to find value
 * Return: NULL if no match else value in key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	n = ht->array[i];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;
	return ((n == NULL) ? NULL : n->value);
}
