#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: The hash table to modify.
 * @key: The key to add or update (cannot be an empty string).
 * @value: The value to associate with the key (can be an empty string).
 *
 * Return: 1 if the operation succeeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *temp;

if (ht == NULL || key == NULL || strcmp(key, "") == 0)
{
return (0);
}

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
if (temp->value == NULL)
{
return (0);
}
return (1);
}
temp = temp->next;
}

new_node = create_node(key, value);
if (new_node == NULL)
{
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}

/**
 * create_node - Creates a new node and initializes its key and value.
 * @key: The key to add (cannot be an empty string).
 * @value: The value to associate with the key (can be an empty string).
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}

new_node->next = NULL;

return (new_node);
}
