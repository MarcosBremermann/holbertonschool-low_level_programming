#include "hash_tables.h"
/**
 * key_index - gives index of a key
 *
 * @key: key whose index will be calculated
 *
 * @size: size of the array of hash table
 *
 * Return: index at which the key should be stored in
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
