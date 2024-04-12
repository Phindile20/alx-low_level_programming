# 0x1A C-Hash tables

## This folder contains the project 0x1A C - Hash tables, and it's associated tasks:
0.  >>> ht = {} - 0-hash_table_create.c
	* Write a function that creates a hash table.
		* Prototype: hash_table_t *hash_table_create(unsigned long int size);
			* where size is the size of the array
		* Returns a pointer to the newly created hash table
		* If something went wrong, your function should return NULL
1. djb2 - 1-djb2.c
	* Write a hash function implementing the djb2 algorithm.
		* Prototype: unsigned long int hash_djb2(const unsigned char *str);
    * You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)
2. key -> index - 2-key_index.c
	* Write a function that gives you the index of a key.
		* Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
			* where key is the key
			* and size is the size of the array of the hash table
		* This function should use the hash_djb2 function that you wrote earlier
		* Returns the index at which the key/value pair should be stored in the array of the hash table
		* You will have to use this hash function for all the next tasks
3. >>> ht['betty'] = 'holberton' - 3-hash_table_set.c
	* Write a function that adds an element to the hash table.
		* Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
			* Where ht is the hash table you want to add or update the key/value to
			* key is the key. key can not be an empty string
			* and value is the value associated with the key. value must be duplicated. value can be an empty string
		* Returns: 1 if it succeeded, 0 otherwise
		* In case of collision, add the new node at the beginning of the list
4. >>> ht['betty'] - 4-hash_table_get.c
	* Write a function that retrieves a value associated with a key.
		* Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
			* where ht is the hash table you want to look into
			* and key is the key you are looking for
		* Returns the value associated with the element, or NULL if key couldnt be found
5. >>> print(ht) - 5-hash_table_print.c
	* Write a function that prints a hash table.
		* Prototype: void hash_table_print(const hash_table_t *ht);
			* where ht is the hash table
		* You should print the key/value in the order that they appear in the array of hash table
			* Order: array, list
		* Format: see example
		* If ht is NULL, dont print anything
6. >>> del ht - 6-hash_table_delete.c
	* Write a function that deletes a hash table.
		* Prototype: void hash_table_delete(hash_table_t *ht);
			* where ht is the hash table
