#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int n;
hash_node_t *current, *temp;

if (ht == NULL)
{
return;
}

for (n = 0; n < ht->size; n++)
{
current = ht->array[n];
while (current != NULL)
{
temp = current;
current = current->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}
