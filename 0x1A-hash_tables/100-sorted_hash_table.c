#include "hash_tables.h"

/**
 * shash_table_create - create new hash table
 * @size: size of hash table
 * Return: pointer to new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int a;
	shash_table_t *tbl;

	tbl = malloc(sizeof(shash_table_t));
	if (tbl == NULL)
		return (NULL);
	tbl->size = size;
	tbl->array = malloc(sizeof(shash_node_t *) * size);
	if (tbl->array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		tbl->array[a] = NULL;
	}
	tbl->shead = NULL;
	tbl->stail = NULL;
	return (tbl);
}

/**
 * shash_table_delete - deletes hashtable
 * @ht: pointer
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *n, *temp;
	shash_table_t *h = ht;

	if (ht == NULL)
		return;
	n = ht->shead;
	while (n)
	{
		temp = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = temp;
	}
	free(h->array);
	free(h);
}

/**
 * shash_table_set - adds element to hash table
 * @key: ht pointer
 * @value: value of key
 * Return: -1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp, *new;
	unsigned long int i;
	char *cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cpy = strdup(value);
	if (cpy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = cpy;
			return (1);
		}
		temp = temp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(cpy);
		free(new);
		return (0);
	}
	new->value = cpy;
	new->next = ht->array[i];
	ht->array[i] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
	return (1);
}

/**
 * shash_table_print_rev - prints hashtable in reverse
 * @ht: pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
	
}

/**
 * shash_table_get - get value from key
 * @key: key to find value
 * @ht: pointer
 * Return: value else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	n = ht->shead;
	while (n != NULL && strcmp(n->key, key) !=0)
		n = n->next;
	return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - prints hash table in order
 * @ht: hash table pointer
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
