#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head_table = ht;
hash_node_t *station, *temp_file;
unsigned long int x;
for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
station = ht->array[x];
while (node != NULL)
{
temp_file = station->next;
free(station->key);
free(station->value);
free(station);
station = temp_file;
}
}
}
free(head_table->array);
free(head_table);
}
