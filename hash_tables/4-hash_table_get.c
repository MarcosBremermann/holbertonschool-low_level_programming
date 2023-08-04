#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 *
 * @ht: hash table to look into
 *
 * @key: key to find the associated value
 *
 * Return: either the value of the element, or NULL if key wasnt found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
