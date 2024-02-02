#include "hash_tables.h"
/**
 * key_index - get key/value pair index in hash table
 * @key: key to find index
 * @size: size of hash table array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
