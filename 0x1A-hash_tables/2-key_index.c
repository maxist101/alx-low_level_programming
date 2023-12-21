#include "hash_tables.h"

/**
 * key_index - func gives you the index of a key
 * @key: Key
 * @size: Size
 *
 * Return: The index which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
