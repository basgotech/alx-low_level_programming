#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int x;
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
return (NULL);
}
hash_table->size = size;
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (hash_table->array == NULL)
{
return (NULL);
}
for (x = 0; x < size; x++)
{
hash_table->array[x] = NULL;
}
return (hash_table);
}
