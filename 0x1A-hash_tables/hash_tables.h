#ifndef HASH_ALGO_H
#define HASH_ALGO_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct hash_node_sort - Node of a sorted hash table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct hash_node_sort
{
    char *key;
    char *value;
    struct hash_node_sort *next;
    struct hash_node_sort *sprev;
    struct hash_node_sort *snext;
} hash_node_sort;

/**
 * struct hash_table_sort - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct hash_table_sort
{
    unsigned long int size;
    hash_table_sort **array;
    hash_table_sort *shead;
    hash_table_sort *stail;
} hash_table_sort;

hash_table_sort *shash_table_create(unsigned long int size);
int shash_table_set(hash_table_sort *ht, const char *key, const char *value);
char *shash_table_get(const hash_table_sort *ht, const char *key);
void shash_table_print(const hash_table_sort *ht);
void shash_table_print_rev(const hash_table_sort *ht);
void shash_table_delete(hash_table_sort *ht);

#endif
