#include "hash_tables.h"
/**
 * hash_table_print - function that prints hash table
 *
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (comma == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
