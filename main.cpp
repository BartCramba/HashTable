/*
 * main.cpp
 *
 *      Author: Payaam Emami
 */
#include "HashTable.h"

int main() {
	// Creates a hash table
	HashTable hashTable;

	// Adds entries to the hash table
	hashTable.insert("Payaam", "Chester");
	hashTable.insert("Phillis", "Luna");
	hashTable.insert("Stanley", "Ty");
	hashTable.insert("Dwight", "Maya");
	hashTable.insert("Jim", "Luther");
	hashTable.insert("Pam", "Luke");
	hashTable.insert("Michael","Whiskey");

	// Searches for specific values
	cout << hashTable.search("Payaam") << endl;
	cout << hashTable.search("Jim") << endl;

	// Removes entries from hash table
	hashTable.remove("Payaam");

	// Searches for specific values
	cout << hashTable.search("Payaam") << endl;

	return 0;
}
