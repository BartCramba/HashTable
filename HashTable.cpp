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
	// Creates a hash object using standard library
	hash<string> stringHash;

	// Retrieves the hash value
	size_t hashValue = stringHash(key);

	// Converts the hash value into an array index
	int index = hashValue % ARRAY_SIZE;

	// Adds the name into the array
	array[index].add(key, value);
}

// Destructor
HashTable::~HashTable() {
	// TODO Auto-generated destructor stub
}

