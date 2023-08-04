#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes hash tables
 *
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *current;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			current = temp;
			temp = temp->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}

	free(ht->array);

	free(ht);
}
