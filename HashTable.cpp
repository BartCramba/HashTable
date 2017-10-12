/*
 * HashTable.cpp
 *
 *      Author: Payaam Emami
 */

#include "HashTable.h"

// Add an entry in the hash table
void HashTable::insert(string key, string value) {
	// Converts the hash value into an array index
	int index = getHashIndex(key);

	// Adds the entry into the bucket
	array[index].insert(key, value);
}

// Remove an entry in the hash table
void HashTable::remove(string key) {
	// Converts the hash value into an array index
	int index = getHashIndex(key);

	// Removes the node if it exists in the bucket
	array[index].remove(key);
}

// Searches and returns the value associated by parameter key
string HashTable::search(string key) {
	// Converts the hash value into an array index
	int index = getHashIndex(key);

	// Searches the bucket for the entry matching the key
	return array[index].search(key);
}

// Generates a hash based on the key and calculates an index
int HashTable::getHashIndex(string key) {
	// Create a hash object
	hash<string> stringHash;

	// Retrieves the hash value
	size_t hashValue = stringHash(key);

	// Converts the hash value into an array index
	return hashValue % ARRAY_SIZE;
}

