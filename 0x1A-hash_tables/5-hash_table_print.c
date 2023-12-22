#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node_station;
unsigned long int x;
unsigned char flag_grapper = 0;
if (ht == NULL)
{
return;
}
printf("{");
for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
if (flag_grapper == 1)
{
printf(", ");
}
node_station = ht->array[x];
while (node_station != NULL)
{
printf("'%s': '%s'", node_station->key, node_station->value);
node_station = node_station->next;
if (node_station != NULL)
{
printf(", ");
}
}
flag_grapper = 1;
}
}
printf("}\n");
}
