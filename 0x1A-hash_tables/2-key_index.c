nclude "hash_tables.h"

/**
 *  *key_index - Returns the index at which the key/value pair should be stored
 *   *            in the array of the hash table.
 *    *@key: The key.
 *     *@size: The size of the array of the hash table.
 *      *
 *       *Return: The index at which the key/value pair should be stored.
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int hash_value;

			/*Obtain the hash value using the hash_djb2 function */
			hash_value = hash_djb2(key);

				/*Return the index within the bounds of the hash table size */
				return (hash_value % size);
}
