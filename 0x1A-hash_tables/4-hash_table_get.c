#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated key table
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: If the key cannot be matched - NULL. or ass with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *sta;
unsigned long int index_grapper;
if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
index_grapper = key_index((const unsigned char *)key, ht->size);
if (index_grapper >= ht->size)
{
return (NULL);
}
sta = ht->array[index_grapper];
while (sta && strcmp(sta->key, key) != 0)
{
sta = sta->next;
}
return ((sta == NULL) ? NULL : sta->value);
}
