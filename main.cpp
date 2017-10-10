/*
 * main.cpp
 *
 *      Author: Payaam Emami
 */
#include "HashTable.h"

int main() {
	// Creates a hash table
	HashTable hashTable;

	// Adds names to the hash table
	hashTable.put("Payaam", "Chester");
	hashTable.put("Phillis", "Luna");
	hashTable.put("Stanley", "Ty");
	hashTable.put("Dwight", "Maya");
	hashTable.put("Jim", "Luther");
	hashTable.put("Pam", "Luke");
	hashTable.put("Michael","Whiskey");

	return 0;
}
