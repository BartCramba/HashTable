/*
 * HashTable.cpp
 *
 *      Author: Payaam Emami
 */

#include "HashTable.h"

namespace HashTable {

// Constructor
HashTable::HashTable() {
	// TODO Auto-generated constructor stub

}

void HashTable::put(string name) {
	// Creates a hash object using standard library
	hash<string> stringHash;

	// Retrieves the hash value
	size_t hashValue = stringHash(name);

	// Converts the hash value into an array index
	int index = hashValue % ARRAY_SIZE;

	// Adds the name into the array
	array[index].add(name);
}

// Destructor
HashTable::~HashTable() {
	// TODO Auto-generated destructor stub
}

} /* namespace HashTable */
