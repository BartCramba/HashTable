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
	hashTable.put("Payaam", Dog(123, "Chester", "123 Happy Lane"));
	hashTable.put("Phillis", Dog(234, "Luna", "238 Crazy Dr"));
	hashTable.put("Stanley", Dog(384, "Ty", "823 Human Road"));
	hashTable.put("Dwight", Dog(293, "Maya", "983 Calm St"));
	hashTable.put("Jim", Dog(932, "Luther", "913 Happy Lane"));
	hashTable.put("Pam", Dog(364, "Luke", "293 Backyard Dr"));
	hashTable.put("Michael", Dog(154, "Whiskey", "753 Brown Road"));

	return 0;
}
