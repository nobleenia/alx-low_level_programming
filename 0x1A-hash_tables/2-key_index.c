#include "hash_tables.h"

/**
 * key_index - gives index of the key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index of the hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;

if (!size)
{
return (0);
}

hash = hash_djb2(key);

return (hash % size);
}
