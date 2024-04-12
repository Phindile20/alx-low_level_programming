#include "hash_tables.h"
/**
* hash_table_create - function
* @size: size of the hash table array
*
* Description: Creates a hash table.
* Return: Ptr to new table, or NULL if fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size <= 0) /* size must be a positive number */
		return (NULL);

/* allocate memory for table and array and check for fail */
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);
	new->size = size;
/* traverse size and set each array index to null inside table */
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
