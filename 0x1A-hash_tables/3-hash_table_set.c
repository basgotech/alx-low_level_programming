#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0. or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_hash;
char *cp_val;
unsigned long int index, x;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
    return (0);
}
cp_val = strdup(value);
if (cp_val == NULL)
{
    return (0);
}
index = key_index((const unsigned char *)key, ht->size);
for (x = index; ht->array[x]; x++)
{
if (strcmp(ht->array[x]->key, key) == 0)
{
free(ht->array[x]->value);
ht->array[x]->value = cp_val;
return (1);
}
}
new_hash = malloc(sizeof(hash_node_t));
if (new_hash == NULL)
{
free(cp_val);
return (0);
}
new_hash->key = strdup(key);
if (new_hash->key == NULL)
{
free(new_hash);
return (0);
}
new_hash->value = cp_val;
new_hash->next = ht->array[index];
ht->array[index] = new_hash;
return (1);
}
