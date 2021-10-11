#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: the size of the array
 *
 * Return: new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *new_hasht = NULL;

	new_hasht = malloc(sizeof(size))

	if (new_hasht == NULL)
	{
		return (NULL);
	}
	return (new_hasht);
}
