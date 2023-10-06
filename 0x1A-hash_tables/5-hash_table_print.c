#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int n;
hash_node_t *node;
int first_node;

if (ht == NULL)
{
return;
}

printf("{");
for (n = 0; n < ht->size; n++)
{
node = ht->array[n];
while (node != NULL)
{
if (!first_node)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
first_node = 0;
node = node->next;
}
}
printf("}\n");
}
