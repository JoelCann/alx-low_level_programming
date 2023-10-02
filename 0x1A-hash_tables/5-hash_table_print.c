#include "hash_tables.h"

/**
 * hash_table_print - a function to print the key:value from ht
 * @ht: points to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t  *bucket;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		bucket = ht->array[j];
		while (bucket)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
