/*
 * HashTable.cpp
 *
 *      Author: Payaam Emami
 */

#include "HashTable.h"

// Constructor
HashTable::HashTable() {
	// TODO Auto-generated constructor stub

}

void HashTable::put(string key, string value) {
	// Creates a hash object
	hash<string> stringHash;

	// Retrieves the hash value
	size_t hashValue = stringHash(key);

	// Converts the hash value into an array index
	int index = hashValue % ARRAY_SIZE;

	// Adds the entry into the bucket
	array[index].add(key, value);
}

void HashTable::remove(string key) {
	// Create a hash object
	hash<string> stringHash;

	// Retrieves the hash value
	size_t hashValue = stringHash(key);

	// Converts the hash value into an array index
	int index = hashValue % ARRAY_SIZE;

	// Removes the node if it exists in the bucket
	array[index].remove(key);
}

// Destructor
HashTable::~HashTable() {
	// TODO Auto-generated destructor stub
}

