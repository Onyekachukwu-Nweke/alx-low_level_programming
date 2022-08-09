#include "hash_tables.h"

/**
 * key_index - the function gives you the index of a key
 * @key: string used to generate hash value
 * @size: size of the array
 * Return: hash_index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index = hash_djb2(key) % size;

	return (hash_index);
}
