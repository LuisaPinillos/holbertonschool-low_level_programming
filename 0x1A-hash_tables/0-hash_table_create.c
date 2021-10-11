#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: the size of the array
 *
 * Return: new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhasht = NULL;
	unsigned int a;

	if (size < 1)
	{
		return (NULL);
	}

	newhasht = malloc(sizeof(hash_table_t));

	if (newhasht == NULL)
	{
		return (NULL);
	}

	newhasht->size = size;
	newhasht->array = malloc(sizeof(hash_table_t *) * size);
	if (newhasht->array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		newhasht->array[1] = NULL;
	}

	return (newhasht);
}
