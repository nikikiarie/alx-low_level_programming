#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value of key
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int i, a;
	char *cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cpy = strdup(value);
	if (cpy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	for (a = i; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = cpy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cpy;
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
